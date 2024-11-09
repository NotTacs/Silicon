#include "Driver.h"

UActorChannel* Driver::FindActorChannelRef(UNetConnection* Connection, AActor* Actor) {
	for (UChannel* Channel : Connection->OpenChannels) {
		if (Channel->Class == UActorChannel::StaticClass()) {
			if (Channel->Cast<UActorChannel*>()->Actor == Actor) return Channel->Cast<UActorChannel*>();
		}
	}

	UActorChannel* Channel = Addresses::CreateChannel(Connection, 2, true, -1)->Cast<UActorChannel*>();
	if (Channel) {
		Addresses::SetChannelActor(Channel, Actor);
		Channel->Connection = Connection;
		return Channel;
	}
}



int32 Driver::ServerReplicateActors_PrepConnections(UNetDriver* Driver) {
	int ArrayNum = Driver->ClientConnections.Num();
	auto v10 = 0;
	bool bFoundReadyConnection = false;
	FName* v13 = nullptr;
	if (ArrayNum > 0) {
		for (int i = 0; i < ArrayNum; i++) {
			UNetConnection* v12 = Driver->ClientConnections[i];
			if (!v12) continue;

			if ((unsigned int)(*(DWORD*)(__int64(v12) + 0x134) - 1) > 2) {
				//Some Connection->State Checks
				continue;
				//Skidding Psuedocode
			}
			if (v12->MaxPacket && *(DWORD*)(v12 + 0x134) == 3 && *(float*)*(uint64_t*)(v12 + 0x60) + 344 - *(double*)(v12 + 480) < 1.5) {
				bFoundReadyConnection = true;
				auto v14 = *(uint64_t*)(v12 + 0x38);
				if (v14) {
					auto v15 = (*(__int64(__fastcall**)(__int64))(*(uint64_t*)v14 + 0x648))(v14);

					auto v16 = (FName*)v15;


					if (v15) {
						if ((*(__int64(__fastcall**)(__int64))(*(uint64_t*)v15 + 0x138))(v15)) {
							v13 = v16;
						}
					}
				}

			}
			*(FName**)(v12 + 0x98) = v13;
			if (*(int*)(v12 + 0x58) > 0) {
				auto v20 = 0;
				for (int i = 0; i < v12->Children.Num(); i++) {
					UNetConnection* Child = v12->Children[i];
					APlayerController* ChildPlayerController = Child->PlayerController;

					if (ChildPlayerController) {
						*(uint64_t*)(ChildPlayerController + 0x98) = (*(__int64(__fastcall**)(__int64))(*(uint64_t*)ChildPlayerController + 0x648))(__int64(ChildPlayerController));
					}
					else {
						*(uint64_t*)(Child + 0x98) = 0;
					}
					v20 += 8;
				}
				while (i < *(uint64_t*)(v12 + 0x58));
			}
			else {
				*(uint64_t*)(v12 + 0x98) = 0;
				if (*(int*)(v12 + 0x58) > 0) {
					auto v24 = 0;
					int z = 0;
					for (z < v12->Children.Num(); z++;) {
						auto v25 = *(uint64_t*)(v24 + *(uint64_t*)(v12 + 0x50));
						v24 += 8;
						*(uint64_t*)(v25 + 0x98) = 0;
					}
					while (z < *(uint64_t*)(v12 + 0x58));
				}
			}

			v10++;
			auto v44 = 0;
			auto v11 = v44 + 8;
			v44 += 8;
		}
		while (v10 < ArrayNum);
	}

	if (ArrayNum)
		return ArrayNum;
	return bFoundReadyConnection;
}


inline float Clamp(float Value, float Min, float Max) {
	if (Value < Min) {
		return Min;
	}
	else if (Value > Max) {
		return Max;
	}
	return Value;
}

float Lerp(float A, float B, float Alpha) {
	return A + (B - A) * Alpha;
}

std::vector<AActor*> Driver::ServerReplicateActors_BuildConsiderList(UNetDriver* Driver) {
	//std::cout << "[LogNetTraffic]: ServerReplicateActors_BuildConsiderList, BuildingConsiderList %4.2f" << UGameplayStatics::GetTimeSeconds(Addresses::GetWorld());
	std::vector<AActor*> OutActors;
	TArray<AActor*> ActorsToRemove;

	TArray<AActor*> WorldActors;
	UGameplayStatics::GetAllActorsOfClass(Addresses::GetWorld(), AActor::StaticClass(), &WorldActors);

	static bool bTest = false;
	if (!bTest) {
		bTest = true;
		std::cout << "AmountofActors: " << WorldActors.Num() << endl;
	}

	for (AActor* WorldActor : WorldActors) {
		if (WorldActor && IsReplicableActor(WorldActor)) {
			OutActors.push_back(WorldActor);

			Addresses::CallPreReplication(WorldActor, Driver);
		}
	}

	return OutActors;
}

int32 Driver::ServerReplicateActors_ProcessActors(UNetConnection* Connection, std::vector<AActor*> Actors) {
	int FinalActors = 0;

	if (Connection) {
		for (AActor* Actor : Actors) {
			if (Actor && Connection) {
				UActorChannel* Channel = FindActorChannelRef(Connection, Actor);
				if (Channel) {
					FinalActors++;
					ReplicateToClient(Actor, Connection);
				}
				else {
				}
			}
		}
	}

	Actors.clear();

	return FinalActors;
}

int32 Driver::ServerReplicateActors(UNetDriver* Driver) {
	++*(DWORD*)(__int64(Driver) + 0x2C8);
	if (Addresses::GetWorld()) {
		int32 Updated = 0;

		const int32 NumClientsToTick = ServerReplicateActors_PrepConnections(Driver);

		static bool b = false;
		if (!b) {
			b = true;
			std::cout << "Clients: " << NumClientsToTick << std::endl;
		}

		if (NumClientsToTick == 0) return 0;

		std::vector<AActor*> ConsiderList = ServerReplicateActors_BuildConsiderList(Driver);

		static bool bPrintOnce = false;
		if (!bPrintOnce) {
			std::cout << "ConsiderList: " << ConsiderList.size() << std::endl;
			bPrintOnce = true;
		}

		for (int32 i = 0; i < Driver->ClientConnections.Num(); i++) {
			UNetConnection* Connection = Driver->ClientConnections[i];
			if (Connection) {
				if (Connection->ViewTarget) {
					if (Connection->PlayerController) {
						Addresses::SendClientAdjustment(Connection->PlayerController);
						int Count = ServerReplicateActors_ProcessActors(Connection, ConsiderList);
						static bool bRizzCount = false;
						if (!bRizzCount) {
							std::cout << "Count: " << Count << std::endl;
							bRizzCount = true;
						}
					}
				}
			}
		}

		ConsiderList.clear();
	}
}

void Driver::TickFlush(UNetDriver* Driver, float DelatSeconds) {
	if (Driver->ClientConnections.Num() > 0 && Driver->ClientConnections[0]->InternalAck == false) {
		ServerReplicateActors(Driver);
	}
	return TickFlush_OG(Driver, DelatSeconds);
}