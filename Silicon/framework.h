#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;
#include "minhook/Minhook.h"
#include "SDK/SDK.hpp"
using namespace SDK;

inline uintptr_t ImageBase = uintptr_t(GetModuleHandle(0));

enum class EChannelCreateFlags : uint32
{
	None = (1 << 0),
	OpenedLocally = (1 << 1)
};

namespace Addresses {
	static UFortEngine* GEngine = *reinterpret_cast<UFortEngine**>(ImageBase + 0x5DA3F20);

	static UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld*, FName NetDriverDefinition) = decltype(CreateNetDriver)(ImageBase + 0x1D0CB60);

	static bool (*InitListen)(UNetDriver* IpNetDriver, UWorld* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error) = decltype(InitListen)(ImageBase + 0x2A72B50);

	static void (*SetWorld)(UNetDriver* Driver, UWorld* World) = decltype(SetWorld)(ImageBase + 0x1AEFA50);

	static void (*CallPreReplication)(AActor*, UNetDriver* Driver) = decltype(CallPreReplication)(ImageBase + 0x1761700);

	static UChannel* (*CreateChannel)(UNetConnection* Connection, int, bool bOpenedLocally, int Idx) = decltype(CreateChannel)(ImageBase + 0x1AD6A60);

	static void (*SetChannelActor)(UActorChannel* Channel, AActor* Actor) = decltype(SetChannelActor)(ImageBase + 0x1970310);

	static void (*SendClientAdjustment)(APlayerController* Controller) = decltype(SendClientAdjustment)(ImageBase + 0x1BE16B0);

	static bool (*ReplicateActor)(UActorChannel* Channel) = decltype(ReplicateActor)(ImageBase + 0x196B970);

	static UObject* (*StaticFindObjectOG)(UClass*, UObject* Package, const wchar_t* OrigInName, bool ExactClass) = decltype(StaticFindObjectOG)(ImageBase + 0xe07e60);

	static UObject* (*StaticLoadObjectOG)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation, void*) = decltype(StaticLoadObjectOG)(ImageBase + 0xe090a0);

	UWorld* GetWorld();
}

namespace Utils {
	template<typename T>
	inline T* SpawnActor(FTransform Transform, AActor* Owner) {
		AActor* Actor = UGameplayStatics::BeginDeferredActorSpawnFromClass(Addresses::GetWorld(), T::StaticClass(), Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, Owner);

		return (T*)UGameplayStatics::FinishSpawningActor(Actor, Transform);
	}

	template <typename T>
	static T* StaticFindObject(std::string ObjectName)
	{
		auto NameWStr = std::wstring(ObjectName.begin(), ObjectName.end()).c_str();

		return (T*)Addresses::StaticFindObjectOG(T::StaticClass(), nullptr, NameWStr, false);
	}

	template<typename T>
	inline T* StaticLoadObject(std::string name) {
		T* Object = StaticFindObject<T>(name);

		if (!Object) {
			auto Name = std::wstring(name.begin(), name.end()).c_str();
			Object = (T*)Addresses::StaticLoadObjectOG(T::StaticClass(), nullptr, Name, nullptr, 0, nullptr, false, nullptr);
		}

		return Object;
	}
}

namespace Globals {
	static std::string WebhookURL = "";
}

namespace Hooks {
	MH_STATUS CreateHook(uintptr_t Address, PVOID Hook, void** OG);
	void VFTHook(void** VFT, int IamTired, PVOID Hook, void** OG);
}
