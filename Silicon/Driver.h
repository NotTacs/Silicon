#pragma once
#include "framework.h"

struct FNetworkObjectInfo { //https://github.com/EpicGames/UnrealEngine/blob/40eea367040d50aadd9f030ed5909fc890c159c2/Engine/Source/Runtime/Engine/Classes/Engine/NetworkObjectList.h#L34
	AActor* Actor;
	
	TWeakObjectPtr<AActor> WeakActor;

	double NextUpdateTime;

	double LastNetReplicateTiem;

	float OptimalNetUpdateDelta;

	double LastNetUpdateTimeStamp;

	uint32 bPendingNetUpdate : 1;

	uint32 bForceRelevantNextUpdate : 1;

	TSet<TWeakObjectPtr<UNetConnection>> DormantConnections;
	TSet<TWeakObjectPtr<UNetConnection>> RecentlyDormantConnections;
};

template< class ObjectType>
class TSharedPtr
{
public:
	ObjectType* Object;

	int32 SharedReferenceCount;
	int32 WeakReferenceCount;

	FORCEINLINE ObjectType* Get()
	{
		return Object;
	}
	FORCEINLINE ObjectType* Get() const
	{
		return Object;
	}
	FORCEINLINE ObjectType& operator*()
	{
		return *Object;
	}
	FORCEINLINE const ObjectType& operator*() const
	{
		return *Object;
	}
	FORCEINLINE ObjectType* operator->()
	{
		return Object;
	}
	FORCEINLINE ObjectType* operator->() const
	{
		return Object;
	}
};

class FNetworkObjectList
{
public:
	typedef TSet<TSharedPtr<FNetworkObjectInfo>> FNetworkObjectSet;

	FNetworkObjectSet AllNetworkObjects;
	FNetworkObjectSet ActiveNetworkObjects;
	FNetworkObjectSet ObjectsDormantOnAllConnections;

	TMap<TWeakObjectPtr<UNetConnection>, int32> NumDormantObjectsPerConnection;
};

namespace Driver {
	
	UActorChannel* FindActorChannelRef(UNetConnection* Connection, AActor* Actor);

	inline bool IsReplicableActor(AActor* Actor) {
		if (!Actor) return false;
		if (Actor->bAlwaysRelevant) return true;
		if (Actor && Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup) return false;
		if (Actor->Name.ComparisonIndex != 0 && Actor->bReplicates && Actor->RemoteRole != ENetRole::ROLE_None) return true;
		return false;
	}

	inline void ReplicateToClient(AActor* Actor, UNetConnection* Client) {
		if (!Client || !Actor) {
			return;
		}
		if (Actor->IsA(APlayerController::StaticClass()) && Client->PlayerController && Actor != Client->PlayerController) {
			return;
		}
		auto Ch = FindActorChannelRef(Client, Actor);
		if (!Ch) {
			return;
		}
		Addresses::CallPreReplication(Actor, Client->Driver);
		Addresses::ReplicateActor(Ch);
	}
	int32 ServerReplicateActors_PrepConnections(UNetDriver* Driver);
	std::vector<AActor*> ServerReplicateActors_BuildConsiderList(UNetDriver* Driver);
	int32 ServerReplicateActors_ProcessActors(UNetConnection* Connection, std::vector<AActor*> Actors);
	int32 ServerReplicateActors(UNetDriver* Driver);
	inline void (*TickFlush_OG)(UNetDriver* D, float);
	void TickFlush(UNetDriver* Driver, float);
}