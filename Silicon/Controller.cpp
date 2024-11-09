#include "Controller.h"
#include "Abilities.h"

void Controller::ServerExecuteInventoryItem(AFortPlayerControllerAthena* Controller, FGuid Guid) {

	UFortWorldItem* Item = nullptr;

	for (auto& ItemInstance : Controller->WorldInventory->Inventory.ItemInstances) {
		if (ItemInstance->ItemEntry.ItemGuid == Guid)
		{
			Item = ItemInstance;
		}
	}

	if (Item) {
		if (Controller->MyFortPawn && Item->ItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass())) {
			AFortWeapon* Weapon = Controller->MyFortPawn->EquipWeaponDefinition(Item->ItemEntry.ItemDefinition->Cast<UFortWeaponItemDefinition*>(), Guid);
			if (Weapon->IsA(AFortWeap_BuildingTool::StaticClass())) {
				if (Weapon->WeaponData) {
					Weapon->Cast<AFortWeap_BuildingTool*>()->DefaultMetadata = Weapon->WeaponData->Cast<UFortBuildingItemDefinition*>()->BuildingMetaData.Get();
					Weapon->Cast<AFortWeap_BuildingTool*>()->OnRep_DefaultMetadata();
				}
			}
 		}
	}
}
void Controller::ServerReadyToStartMatch(AFortPlayerControllerAthena* Controller) {
	
	AFortGameModeAthena* GameMode = Addresses::GetWorld()->AuthorityGameMode->Cast<AFortGameModeAthena*>();
	AFortGameStateAthena* GameState = Addresses::GetWorld()->GameState->Cast<AFortGameStateAthena*>();

	static UAthenaBattleBusItemDefinition* BusItemDef = Utils::StaticLoadObject<UAthenaBattleBusItemDefinition>("/Game/Athena/Items/Cosmetics/BattleBuses/BBID_WinterBus.BBID_WinterBus");

	GameState->DefaultBattleBus = BusItemDef;

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(Addresses::GetWorld(), AFortAthenaAircraft::StaticClass(), &Actors);

	for (AActor* Actor : Actors) {
		auto Aircraft = Actor->Cast<AFortAthenaAircraft*>();

		Aircraft->DefaultBusSkin = BusItemDef;
		Aircraft->SpawnedCosmeticActor->ActiveSkin = BusItemDef;
	}

	return ServerReadyToStartMatch_OG(Controller);
}

void Controller::ServerAcknowledgePossession(AFortPlayerControllerAthena* Controller, AFortPawn* P) {
	Controller->AcknowledgedPawn = P;

	static UFortAbilitySet* Set = Utils::StaticLoadObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");
	Abilities::GiveAbilitySet(Controller->MyFortPawn, Set);

	return ServerAcknowledgePossesion_OG(Controller, P);
}

void Controller::ClientOnPawnDied(AFortPlayerControllerAthena* Controller, FFortPlayerDeathReport& DeathReport) {
	AFortPlayerPawnAthena* KillerPawn = DeathReport.KillerPawn->Cast<AFortPlayerPawnAthena*>();
	AFortPlayerControllerAthena* KillerController = DeathReport.KillerPawn->Controller->Cast<AFortPlayerControllerAthena*>();
	AFortPlayerStateAthena* KillerPlayerState = DeathReport.KillerPlayerState->Cast<AFortPlayerStateAthena*>();
	float LethalDamage = DeathReport.LethalDamage;
	AActor* DamageCauser = DeathReport.DamageCauser;
	FGameplayTagContainer Tags = DeathReport.Tags;
	if (DamageCauser) {
		std::cout << "DamageCauser: " << DeathReport.DamageCauser->GetName() << std::endl;
	}

	AFortPlayerPawnAthena* DeadPawn = Controller->MyFortPawn->Cast<AFortPlayerPawnAthena*>();



	return Controller::ClientOnPawnDied_OG(Controller, DeathReport);
}