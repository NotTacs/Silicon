#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_NoDurability

#include "Basic.hpp"

#include "Announce_NoDurability_classes.hpp"
#include "Announce_NoDurability_parameters.hpp"


namespace SDK
{

// Function Announce_NoDurability.Announce_NoDurability_C.ExecuteUbergraph_Announce_NoDurability
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_NoDurability_C::ExecuteUbergraph_Announce_NoDurability(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_NoDurability_C", "ExecuteUbergraph_Announce_NoDurability");

	Params::Announce_NoDurability_C_ExecuteUbergraph_Announce_NoDurability Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_NoDurability.Announce_NoDurability_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_NoDurability_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_NoDurability_C", "OnClientAnnouncementStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_NoDurability.Announce_NoDurability_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_NoDurability_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_NoDurability_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

