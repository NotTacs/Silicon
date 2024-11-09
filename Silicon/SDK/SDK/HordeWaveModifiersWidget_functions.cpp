#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HordeWaveModifiersWidget

#include "Basic.hpp"

#include "HordeWaveModifiersWidget_classes.hpp"
#include "HordeWaveModifiersWidget_parameters.hpp"


namespace SDK
{

// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnAllModifiersPresented__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHordeWaveModifiersWidget_C::OnAllModifiersPresented__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveModifiersWidget_C", "OnAllModifiersPresented__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.OnModifiersAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>Modifiers                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                                    StartPresentationImmediately                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHordeWaveModifiersWidget_C::OnModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*>& Modifiers, bool StartPresentationImmediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveModifiersWidget_C", "OnModifiersAdded");

	Params::HordeWaveModifiersWidget_C_OnModifiersAdded Parms{};

	Parms.Modifiers = std::move(Modifiers);
	Parms.StartPresentationImmediately = StartPresentationImmediately;

	UObject::ProcessEvent(Func, &Parms);

	Modifiers = std::move(Parms.Modifiers);
}


// Function HordeWaveModifiersWidget.HordeWaveModifiersWidget_C.PresentNextModifier
// (Public, BlueprintCallable, BlueprintEvent)

void UHordeWaveModifiersWidget_C::PresentNextModifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HordeWaveModifiersWidget_C", "PresentNextModifier");

	UObject::ProcessEvent(Func, nullptr);
}

}

