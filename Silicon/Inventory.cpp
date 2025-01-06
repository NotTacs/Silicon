#include "Inventory.h"

EFortQuickBars Inventory::GetQuickBars(UFortItemDefinition* Def) {
	if (Def->IsA(UFortBuildingItemDefinition::StaticClass()) || Def->IsA(UFortResourceItemDefinition::StaticClass()) || Def->IsA(UFortAmmoItemDefinition::StaticClass())) return EFortQuickBars::Secondary;

	return EFortQuickBars::Primary;
}

int Inventory::GetOpenSlot(AFortPlayerControllerAthena* PC, EFortQuickBars Quickbar) {
	if (PC->QuickBars) {
		if (Quickbar == EFortQuickBars::Primary) {
			for (int i = 0; i < PC->QuickBars->PrimaryQuickBar.Slots.Num(); i++) {
				if (PC->QuickBars->PrimaryQuickBar.Slots[i].Items.Data == nullptr) {
					return i;
				}
			}
		}
		else {
			for (int i = 0; i < PC->QuickBars->SecondaryQuickBar.Slots.Num(); i++) {
				if (PC->QuickBars->SecondaryQuickBar.Slots[i].Items.Data == nullptr) {
					return i;
				}
			}
		}
	}

	return -1;
}



UFortWorldItem* Inventory::GiveItem(AFortPlayerControllerAthena* Controller, UFortItemDefinition* Def, int Count, bool bStack) {
	UFortWorldItem* Item = Def->CreateTemporaryItemInstanceBP(Count, 0)->Cast<UFortWorldItem*>();
	Item->ItemEntry.LoadedAmmo = 0;
	Item->ItemEntry.ParentInventory.Get() == Controller->WorldInventory;
	Item->SetOwningControllerForTemporaryItem(Controller);
	Item->OwnerInventory = Controller->WorldInventory;

	int SlotOpen = -1;

	if (Controller->QuickBars) {
		for (int i = 0; i < Controller->QuickBars->PrimaryQuickBar.Slots.Num(); i++) {
			if (Controller->QuickBars->PrimaryQuickBar.Slots[i].Items.Data == nullptr) {
				SlotOpen = i;
				break;
			}
		}
	}

	if (bStack) {
		FGuid Guid;
		for (int i = 0; i < Controller->WorldInventory->Inventory.ItemInstances.Num(); i++) {
			UFortWorldItem* ItemInstance = Controller->WorldInventory->Inventory.ItemInstances[i];
			if (ItemInstance->ItemEntry.ItemDefinition == Def) {
				Item->ItemEntry.Count += ItemInstance->ItemEntry.Count;
				Guid = ItemInstance->ItemEntry.ItemGuid;
				Controller->WorldInventory->Inventory.ItemInstances.Remove(i);
			}
		}
		for (int i = 0; i < Controller->WorldInventory->Inventory.ReplicatedEntries.Num(); i++) {
			auto& s = Controller->WorldInventory->Inventory.ReplicatedEntries[i];
			if (s.ItemDefinition == Def) {
				Controller->WorldInventory->Inventory.ReplicatedEntries.Remove(i);
			}
		}

		Controller->QuickBars->ServerRemoveItemInternal(Guid, false, true);
	}

	FFortItemEntryStateValue V{};
	V.IntValue = 0.1;
	V.StateType = EFortItemEntryState::ShouldShowItemToast;
	Item->ItemEntry.StateValues.Add(V);

	

	Controller->WorldInventory->Inventory.ItemInstances.Add(Item);
	Controller->WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);

	Controller->QuickBars->ServerAddItemInternal(Item->GetItemGuid(), GetQuickBars(Def), GetOpenSlot(Controller, GetQuickBars(Def)));

	Controller->HandleWorldInventoryLocalUpdate();
	Controller->WorldInventory->HandleInventoryLocalUpdate();
	Controller->QuickBars->OnRep_PrimaryQuickBar();
	Controller->QuickBars->OnRep_SecondaryQuickBar();

	Controller->WorldInventory->Inventory.MarkArrayDirty();

	return Item;
}

AFortPickupAthena* Inventory::SpawnPickup(UFortItemDefinition* Definition, FVector Loc, int Count, AFortPlayerPawn* Pawn) {
	FTransform Transform{};
	Transform.Translation = Loc;
	Transform.Rotation = {};
	Transform.Scale3D = FVector{ 1,1,1 };
	AFortPickupAthena* NewPickup = Utils::SpawnActor<AFortPickupAthena>(Transform, nullptr);
	NewPickup->PrimaryPickupItemEntry.ItemDefinition = Definition;
	NewPickup->PrimaryPickupItemEntry.Count = Count;
	NewPickup->PrimaryPickupItemEntry.LoadedAmmo = 0;
	NewPickup->OnRep_PrimaryPickupItemEntry();
	NewPickup->PawnWhoDroppedPickup = Pawn;

	NewPickup->TossPickup(Loc, Pawn, 0, true);

	return NewPickup;
}

UFortWorldItem* Inventory::GetItemInstance(AFortPlayerControllerAthena* Controller, FGuid Guid) {
	for (UFortWorldItem* ItemInstance : Controller->WorldInventory->Inventory.ItemInstances) {
		if (ItemInstance->ItemEntry.ItemGuid == Guid) return ItemInstance;
	}
}

