#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickbarPrimary

#include "Basic.hpp"

#include "AthenaQuickbarPrimary_classes.hpp"
#include "AthenaQuickbarPrimary_parameters.hpp"


namespace SDK
{

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarPrimary_C::ExecuteUbergraph_AthenaQuickbarPrimary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "ExecuteUbergraph_AthenaQuickbarPrimary");

	Params::AthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.AnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::AnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "AnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarPrimary_C::OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "OnQuickbarContentsChanged");

	Params::AthenaQuickbarPrimary_C_OnQuickbarContentsChanged Parms{};

	Parms.QuickbarIndex = QuickbarIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                          QuickbarIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuickbarPrimary_C::OnQuickBarSlotFocusChanged_Bind(EFortQuickBars QuickbarIndex, int32 Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "OnQuickBarSlotFocusChanged_Bind");

	Params::AthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind Parms{};

	Parms.QuickbarIndex = QuickbarIndex;
	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::HandleInputMethodChanged_Bind(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HandleInputMethodChanged_Bind");

	Params::AthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::Show_Primary_Quickbar_Rail(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Show Primary Quickbar Rail");

	Params::AthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    HasNonHarvestWeapon                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaQuickbarPrimary_C::HasOneNonHarvestWeapon(bool* HasNonHarvestWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HasOneNonHarvestWeapon");

	Params::AthenaQuickbarPrimary_C_HasOneNonHarvestWeapon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasNonHarvestWeapon != nullptr)
		*HasNonHarvestWeapon = Parms.HasNonHarvestWeapon;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::HandleShowHideWeaponRail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HandleShowHideWeaponRail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Minimize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Minimize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Maximize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "Maximize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::HandleKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickbarPrimary_C", "HandleKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}

