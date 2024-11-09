#pragma once
#include "framework.h"

namespace Inventory {
	int GetOpenSlot(AFortPlayerControllerAthena* PC, EFortQuickBars Quickbar);
	EFortQuickBars GetQuickBars(UFortItemDefinition* Def);
	UFortWorldItem* GiveItem(AFortPlayerControllerAthena* Controller, UFortItemDefinition* Def, int Count, bool bStack);
	void RemoveItem(AFortPlayerControllerAthena* Controller, FGuid, int Count);
	AFortPickupAthena* SpawnPickup(UFortItemDefinition* Definition, FVector Loc, int Count, AFortPlayerPawn* Pawn = nullptr);
	UFortWorldItem* GetItemInstance(AFortPlayerControllerAthena* Controller, FGuid Guid);
	int GetAllItemsInInventory(AFortPlayerControllerAthena* PC);
}