#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComingSoonPlaceholderWidget

#include "Basic.hpp"

#include "ComingSoonPlaceholderWidget_classes.hpp"
#include "ComingSoonPlaceholderWidget_parameters.hpp"


namespace SDK
{

// Function ComingSoonPlaceholderWidget.ComingSoonPlaceholderWidget_C.ExecuteUbergraph_ComingSoonPlaceholderWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComingSoonPlaceholderWidget_C::ExecuteUbergraph_ComingSoonPlaceholderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComingSoonPlaceholderWidget_C", "ExecuteUbergraph_ComingSoonPlaceholderWidget");

	Params::ComingSoonPlaceholderWidget_C_ExecuteUbergraph_ComingSoonPlaceholderWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ComingSoonPlaceholderWidget.ComingSoonPlaceholderWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UComingSoonPlaceholderWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComingSoonPlaceholderWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

