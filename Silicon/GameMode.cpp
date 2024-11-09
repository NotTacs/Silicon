#include "GameMode.h"
#include "Driver.h"
#include "Inventory.h"
#include "Abilities.h"
#include "Looting.h"
using namespace Addresses;
using namespace Driver;

bool GameMode::ReadyToStartMatch_Hook(AFortGameModeAthena* GameMode) {

	auto GameState = GetWorld()->GameState->Cast<AFortGameStateAthena*>();

	if (!GameState) return false;

	if (!GameState->MapInfo) return false;

	static bool bWorldisReady = false;
	if (!bWorldisReady) {

		FName GameNetDriver = FName(282);
		UNetDriver* NetDriver = Addresses::CreateNetDriver(Addresses::GEngine, Addresses::GetWorld(), GameNetDriver);
		NetDriver->NetDriverName = GameNetDriver;

		FURL URL{};
		URL.Port = 7777;

		FString Error;

		if (!InitListen(NetDriver, GetWorld(), URL, false, Error)) {
			std::cout << "Failed To Listen: " << Error.ToString() << std::endl;
			return false;
		}

		SetWorld(NetDriver, GetWorld());

		GetWorld()->NetDriver = NetDriver;

		for (auto& LC : GetWorld()->LevelCollections) {
			LC.NetDriver = NetDriver;
		}

		GameMode->bWorldIsReady = true;

		GameMode->CurrentPlaylistId = 10;

		GameMode->GameSession = Utils::SpawnActor<AFortGameSession>({}, nullptr);
		GameMode->GameSession->MaxPlayers = 100;

		GameMode->StartMatch();
		GameMode->StartPlay();

		EAthenaGamePhase OldGp = GameState->GamePhase;
		GameState->GamePhase = EAthenaGamePhase::Warmup;

		GameState->OnRep_GamePhase(OldGp);

		TArray<AActor*> WarmupActors;
		static UClass* WarmupClass = Utils::StaticLoadObject<UClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C");
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), WarmupClass, &WarmupActors);

		for (int i = 0; i < WarmupActors.Num(); i++) {
			auto Container = (ABuildingContainer*)WarmupActors[i];
			auto Entrys = Looting::PickLootDrops(Container->SearchLootTierGroup);
			Container->K2_GetActorLocation().Z + 50;
			for (auto& item : Entrys) {
				Inventory::SpawnPickup(item.ItemDefinition, Container->K2_GetActorLocation(), item.Count);

				UFortWeaponRangedItemDefinition* Item = (UFortWeaponRangedItemDefinition*)item.ItemDefinition;
			}
			Container->K2_DestroyActor();
		}

		TArray<AActor*> FloorLootActors;
		static UClass* FloorlootClass = Utils::StaticLoadObject<UClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), FloorlootClass, &FloorLootActors);

		for (int i = 0; i < FloorLootActors.Num(); i++) {
			auto Container = (ABuildingContainer*)FloorLootActors[i];
			auto Entrys = Looting::PickLootDrops(Container->SearchLootTierGroup);
			Container->K2_GetActorLocation().Z + 50;

			for (auto& item : Entrys) {
				Inventory::SpawnPickup(item.ItemDefinition, Container->K2_GetActorLocation(), item.Count);

				UFortWeaponRangedItemDefinition* Item = (UFortWeaponRangedItemDefinition*)item.ItemDefinition;
			}
			Container->K2_DestroyActor();
		}

		SetConsoleTitleA("Silicon || Started Listening");
		bWorldisReady = true;
	}

	return GameMode::ReadyToStartMatchOriginal(GameMode);
}

APawn* GameMode::SpawnDefaultPawnFor(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* Controller, AActor* StartSpot) {

	auto Pawn = (AFortPlayerPawnAthena*)GameMode->SpawnDefaultPawnAtTransform(Controller, StartSpot->GetTransform());

	Pawn->bAlwaysRelevant = true; //Best Fix in the book bro trust.

	auto PlayerState = (AFortPlayerStateAthena*)Controller->PlayerState;

	if (Controller->CustomizationLoadout.Character && Controller->CustomizationLoadout.Character->HeroDefinition) {
		for (auto& Specialization : Controller->CustomizationLoadout.Character->HeroDefinition->Specializations) {

			std::string String = UKismetStringLibrary::Conv_NameToString(Specialization.ObjectID.AssetPathName).ToString();
			UFortHeroSpecialization* Spec = Utils::StaticLoadObject<UFortHeroSpecialization>(String);
			if (Spec) {
				for (int i = 0; i < Spec->CharacterParts.Num(); i++) {
					auto& CharacterPart = Spec->CharacterParts[i];
					std::string characterstring = UKismetStringLibrary::Conv_NameToString(CharacterPart.ObjectID.AssetPathName).ToString();
					UCustomCharacterPart* CharacterP = Utils::StaticLoadObject<UCustomCharacterPart>(characterstring);

					if (!CharacterP) continue;
					
					PlayerState->CharacterParts[i] = CharacterP;
				}
			}
		}
	}
	else {
		Controller->ClientReturnToMainMenu(L"Not On Our Backend"); //Dont even think this works but whatever
	}

	static auto EditTool = UObject::FindObject<UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
	static auto Wall = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall");
	static auto Floor = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor");
	static auto Stair = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W");
	static auto Roof = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS");


	for (int i = 0; i < GameMode->StartingItems.Num(); i++) {
		auto& SI = GameMode->StartingItems[i];

		std::cout << "Item: " << SI.Item->GetName() << endl;

		Inventory::GiveItem(Controller, SI.Item, SI.Count, false);
	}
	Inventory::GiveItem(Controller, Controller->CustomizationLoadout.Pickaxe->WeaponDefinition, 1, false);

	PlayerState->OnRep_CharacterParts();

	Driver::ReplicateToClient(Pawn, Controller->NetConnection);
	
	return Pawn;
}

void GameMode::HandleStartingNewPlayer(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* Controller) {

	UNetConnection* Connection = Controller->NetConnection;

	if (Connection->ViewTarget) {
	}
	else {
		Connection->ViewTarget = Controller->GetViewTarget();
	} //Trust me if you don't do this it will NOT load you in, my replication is so damn bad

	
	
	Driver::ReplicateToClient(Controller, Connection);
	Driver::ReplicateToClient(Controller->PlayerState, Connection);
	Driver::ReplicateToClient(Addresses::GetWorld()->GameState, Connection);
	auto PlayerState = (AFortPlayerStateAthena*)Controller->PlayerState;

	uint8_t TeamIndex = (uint8)PlayerState->TeamIndex;

	PlayerState->SquadId = TeamIndex - 3;
	PlayerState->OnRep_SquadId();
	
	AFortInventory* Inventory = Utils::SpawnActor<AFortInventory>({}, Controller);
	Inventory->InventoryType = EFortInventoryType::World;
	Inventory->Inventory = FFortItemList();
	Inventory->Inventory.ItemInstances = TArray<UFortWorldItem*>();
	Inventory->Inventory.ReplicatedEntries = TArray<FFortItemEntry>();
	Inventory->SetOwner(Controller);


	std::cout << Inventory->GetName() << std::endl;

	Controller->WorldInventory = Inventory;

	AFortQuickBars* QuickBars = Utils::SpawnActor<AFortQuickBars>({}, Controller);

	QuickBars->SetOwner(Controller);

	Controller->QuickBars = QuickBars;

	Controller->OverriddenBackpackSize = 5;


	Controller->bHasInitializedWorldInventory = true;
	Controller->HandleWorldInventoryLocalUpdate();
	Controller->WorldInventory->HandleInventoryLocalUpdate();
	QuickBars->OnRep_PrimaryQuickBar();
	QuickBars->OnRep_SecondaryQuickBar();
	Controller->OnRep_QuickBar();

	Controller->WorldInventory->Inventory.MarkArrayDirty();

	Controller->bHasClientFinishedLoading = true;
	Controller->bHasServerFinishedLoading = true;
	Controller->OnRep_bHasServerFinishedLoading();
	Controller->ServerReadyToStartMatch();

	return GameMode::HandleStartingNewPlayer_OG(GameMode, Controller);
}


int FirstTeam = 3;
int PlayersOnTeam = 0;

int MaxSquadSize = 0;

__int64 GameMode::PickTeamHook(AFortGameModeAthena* GameMode, unsigned int a2, __int64 a3) {
	
	auto Playlist = GetPlaylistFromGameMode(GameMode);





	static bool bDonce = false;
	if (!bDonce) {
		switch (Playlist) {
		case EFortAthenaPlaylist::AthenaSolo:
			MaxSquadSize = 1;
			break;
		case EFortAthenaPlaylist::AthenaDuo:
			MaxSquadSize = 2;
			break;
		case EFortAthenaPlaylist::AthenaSquad:
			MaxSquadSize = 4;
			break;
		}
	}

	std::cout << "Team: " << FirstTeam << std::endl;

	std::cout << "MaxSquadSize: " << MaxSquadSize << std::endl;

	PlayersOnTeam++;

	if (PlayersOnTeam >= MaxSquadSize) {
		PlayersOnTeam = 0;
	}

	return FirstTeam;
}