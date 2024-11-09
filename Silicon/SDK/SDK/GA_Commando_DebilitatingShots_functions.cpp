#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_DebilitatingShots

#include "Basic.hpp"

#include "GA_Commando_DebilitatingShots_classes.hpp"
#include "GA_Commando_DebilitatingShots_parameters.hpp"


namespace SDK
{

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Commando_DebilitatingShots_C::ExecuteUbergraph_GA_Commando_DebilitatingShots(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "ExecuteUbergraph_GA_Commando_DebilitatingShots");

	Params::GA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     EventTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          OptionalObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle Target_Data                                            (Parm, OutParm)
// class UClass*                           DebilitatingShots                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Effect_Level                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stack_Count                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Commando_DebilitatingShots_C::SetupGameplayEffect(const struct FGameplayTag& EventTag, class AActor* HitActor, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int32* Effect_Level, int32* Stack_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "SetupGameplayEffect");

	Params::GA_Commando_DebilitatingShots_C_SetupGameplayEffect Parms{};

	Parms.EventTag = std::move(EventTag);
	Parms.HitActor = HitActor;
	Parms.OptionalObject = OptionalObject;

	UObject::ProcessEvent(Func, &Parms);

	if (Target_Data != nullptr)
		*Target_Data = std::move(Parms.Target_Data);

	if (DebilitatingShots != nullptr)
		*DebilitatingShots = Parms.DebilitatingShots;

	if (Effect_Level != nullptr)
		*Effect_Level = Parms.Effect_Level;

	if (Stack_Count != nullptr)
		*Stack_Count = Parms.Stack_Count;
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Magnitude                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Stack_Count                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle        EffectSpecHandle                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEffectSpecHandle        EffectspecHandleOut                                    (Parm, OutParm)

void UGA_Commando_DebilitatingShots_C::SetupAppliedEffect(float Magnitude, float Duration, int32 Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "SetupAppliedEffect");

	Params::GA_Commando_DebilitatingShots_C_SetupAppliedEffect Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Duration = Duration;
	Parms.Stack_Count = Stack_Count;
	Parms.EffectSpecHandle = std::move(EffectSpecHandle);

	UObject::ProcessEvent(Func, &Parms);

	if (EffectspecHandleOut != nullptr)
		*EffectspecHandleOut = std::move(Parms.EffectspecHandleOut);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_DebilitatingShots_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupDebilitationTraining
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle        EffectspecOutInstant                                   (Parm, OutParm)
// struct FGameplayEffectSpecHandle        EffectspecOutDuration                                  (Parm, OutParm)

void UGA_Commando_DebilitatingShots_C::SetupDebilitationTraining(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "SetupDebilitationTraining");

	Params::GA_Commando_DebilitatingShots_C_SetupDebilitationTraining Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EffectspecOutInstant != nullptr)
		*EffectspecOutInstant = std::move(Parms.EffectspecOutInstant);

	if (EffectspecOutDuration != nullptr)
		*EffectspecOutDuration = std::move(Parms.EffectspecOutDuration);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Commando_DebilitatingShots_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "SetupAbility");

	Params::GA_Commando_DebilitatingShots_C_SetupAbility Parms{};

	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Commando_DebilitatingShots_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_DebilitatingShots_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

