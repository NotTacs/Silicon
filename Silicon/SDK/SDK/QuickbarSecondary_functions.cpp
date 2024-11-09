#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuickbarSecondary

#include "Basic.hpp"

#include "QuickbarSecondary_classes.hpp"
#include "QuickbarSecondary_parameters.hpp"


namespace SDK
{

// Function QuickbarSecondary.QuickbarSecondary_C.ExecuteUbergraph_QuickbarSecondary
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSecondary_C::ExecuteUbergraph_QuickbarSecondary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "ExecuteUbergraph_QuickbarSecondary");

	Params::QuickbarSecondary_C_ExecuteUbergraph_QuickbarSecondary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarSecondary.QuickbarSecondary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarSecondary_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarSecondary.QuickbarSecondary_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSecondary_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "HandleInputMethodChanged");

	Params::QuickbarSecondary_C_HandleInputMethodChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarSecondary.QuickbarSecondary_C.Show Secondary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSecondary_C::Show_Secondary_Quickbar_Rail(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "Show Secondary Quickbar Rail");

	Params::QuickbarSecondary_C_Show_Secondary_Quickbar_Rail Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuickbarSecondary.QuickbarSecondary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::Minimize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "Minimize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarSecondary.QuickbarSecondary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::Maximize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "Maximize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarSecondary.QuickbarSecondary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarSecondary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuickbarSecondary.QuickbarSecondary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::HandleKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuickbarSecondary_C", "HandleKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}

