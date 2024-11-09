#pragma once
#include "framework.h"

namespace Abilities {
	inline FGameplayAbilitySpecHandle(*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle* Handle, const FGameplayAbilitySpec&) = decltype(GiveAbility)(ImageBase + 0x2C7BDC0);
	inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, FPredictionKey, UGameplayAbility** OutAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)(ImageBase + 0x2C7D040);
	void GiveAbilitySet(AFortPawn* Pawn, UFortAbilitySet* Set);
	void InternalServerTryActivateAbilityHook(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey);
}