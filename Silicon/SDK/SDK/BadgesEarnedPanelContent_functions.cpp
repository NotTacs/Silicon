#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BadgesEarnedPanelContent

#include "Basic.hpp"

#include "BadgesEarnedPanelContent_classes.hpp"
#include "BadgesEarnedPanelContent_parameters.hpp"


namespace SDK
{

// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.ExecuteUbergraph_BadgesEarnedPanelContent
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBadgesEarnedPanelContent_C::ExecuteUbergraph_BadgesEarnedPanelContent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "ExecuteUbergraph_BadgesEarnedPanelContent");

	Params::BadgesEarnedPanelContent_C_ExecuteUbergraph_BadgesEarnedPanelContent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBadgesEarnedPanelContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleEarnedBadgesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBadgesEarnedPanelContent_C::HandleEarnedBadgesChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "HandleEarnedBadgesChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdateBadgeWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBadgesEarnedPanelContent_C::UpdateBadgeWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "UpdateBadgeWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandlePotentialBadgesChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBadgesEarnedPanelContent_C::HandlePotentialBadgesChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "HandlePotentialBadgesChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.UpdatePotentialBadges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBadgesEarnedPanelContent_C::UpdatePotentialBadges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "UpdatePotentialBadges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.HandleMissionsUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UBadgesEarnedPanelContent_C::HandleMissionsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "HandleMissionsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BadgesEarnedPanelContent.BadgesEarnedPanelContent_C.Get Badge And Count For Player
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            InFortPC                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEarnedBadgeEntry                EarnedBadgeEntry                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*            FortPC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortBadgeItemDefinition*         Badge                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBadgesEarnedPanelContent_C::Get_Badge_And_Count_For_Player(class AFortPlayerController* InFortPC, struct FEarnedBadgeEntry& EarnedBadgeEntry, bool* Found, class AFortPlayerController** FortPC, class UFortBadgeItemDefinition** Badge, int32* Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgesEarnedPanelContent_C", "Get Badge And Count For Player");

	Params::BadgesEarnedPanelContent_C_Get_Badge_And_Count_For_Player Parms{};

	Parms.InFortPC = InFortPC;
	Parms.EarnedBadgeEntry = std::move(EarnedBadgeEntry);

	UObject::ProcessEvent(Func, &Parms);

	EarnedBadgeEntry = std::move(Parms.EarnedBadgeEntry);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (FortPC != nullptr)
		*FortPC = Parms.FortPC;

	if (Badge != nullptr)
		*Badge = Parms.Badge;

	if (Count != nullptr)
		*Count = Parms.Count;
}

}

