#include "Pawn.h"
#include "Inventory.h"

void Pawn::ServerHandlePickup(AFortPlayerPawnAthena* Pawn, class AFortPickup* Pickup, float InFlyTime, const struct FVector& InStartDirection, bool bPlayPickupSound) {
	
	std::cout << "FlyTime: " << InFlyTime << std::endl;

	Pickup->PickupLocationData.FlyTime = InFlyTime;
	Pickup->PickupLocationData.PickupTarget = Pawn;
	Pickup->PickupLocationData.ItemOwner = Pawn;
	Pickup->PickupLocationData.StartDirection = (FVector_NetQuantizeNormal)InStartDirection;
	Pickup->OnRep_PickupLocationData();
	Pickup->OnRep_PickupOwnerData();
	Pickup->bPickedUp = true;
	Pickup->OnRep_bPickedUp();

	if (Pickup->PrimaryPickupItemEntry.ItemDefinition) {
		std::cout << "PickupItemDefinition: " << Pickup->PrimaryPickupItemEntry.ItemDefinition->GetName() << std::endl;
	}

	if (Pawn->CurrentWeapon && Pawn->CurrentWeapon->WeaponData) {
		std::cout << "CurrentWeaponDefinition: " << Pawn->CurrentWeapon->WeaponData->GetName() << std::endl;
	}

	int Items = 0;//Inventory::GetAllItemsInInventory(Pawn->Controller->Cast<AFortPlayerControllerAthena*>());

	if (Items >= 5 && Pawn->CurrentWeapon && Pawn->CurrentWeapon->WeaponData) {
		//Inventory::RemoveItem(Pawn->Controller->Cast<AFortPlayerControllerAthena*>(), Pawn->CurrentWeapon->ItemEntryGuid, Pawn->CurrentWeapon->WeaponData->MaxStackSize);
	}

	std::cout << "Items: " << Items << std::endl;

	Inventory::GiveItem((AFortPlayerControllerAthena*)Pawn->Controller, Pickup->PrimaryPickupItemEntry.ItemDefinition, Pickup->PrimaryPickupItemEntry.Count, Pickup->PrimaryPickupItemEntry.Count > 1 ? true : false);
	
	return Pawn::ServerHandlePickup_OG(Pawn, Pickup, InFlyTime, InStartDirection, bPlayPickupSound);
}