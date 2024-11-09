#include "Actor.h"
#include "Inventory.h"

void Actor::OnDamageServer(ABuildingSMActor* Object, float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext) {

	if (!InstigatedBy || !Object) return OnDamageServer_OG(Object, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	if (Object->IsA(ABuildingSMActor::StaticClass())) {
		if (InstigatedBy->IsA(AFortPlayerControllerAthena::StaticClass()) && !Object->bIsPlayerBuildable) {
			AFortPlayerControllerAthena* Controller = InstigatedBy->Cast<AFortPlayerControllerAthena*>();
			UFortWeaponMeleeItemDefinition* PickaxeDef = Controller->CustomizationLoadout.Pickaxe->WeaponDefinition;
			if (Controller && Controller->MyFortPawn->CurrentWeapon && Controller->MyFortPawn->CurrentWeapon->WeaponData == PickaxeDef) {
				UCurveTable* AthenaResourceRates = Object->BuildingResourceAmountOverride.CurveTable;

				if (!AthenaResourceRates) AthenaResourceRates = Utils::StaticLoadObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");

				float Out;
				UDataTableFunctionLibrary::EvaluateCurveTableRow(AthenaResourceRates, Object->BuildingResourceAmountOverride.RowName, 0.f, nullptr, &Out, FString());
				float AmountToRizz = Object->GetMaxHealth() / Damage;

				float SexualContent = round(Out / AmountToRizz);

				UFortResourceItemDefinition* Def = nullptr;

				for (int i = 0; i < UObject::GObjects->Num(); i++) {
					UObject* GObject = UObject::GObjects->GetByIndex(i);

					if (!GObject) continue;

					if (GObject->IsA(UFortResourceItemDefinition::StaticClass()) && GObject->Cast<UFortResourceItemDefinition*>()->ResourceType == Object->ResourceType) {
						Def = GObject->Cast<UFortResourceItemDefinition*>();
					}
				}

				Controller->ClientReportDamagedResourceBuilding(Object, Object->ResourceType, SexualContent, false, Damage == 100.0f);
				Inventory::GiveItem(Controller, Def, SexualContent, true);
			}
		}
	}

	return OnDamageServer_OG(Object, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}