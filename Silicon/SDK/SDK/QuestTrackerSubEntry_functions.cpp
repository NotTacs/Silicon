#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTrackerSubEntry

#include "Basic.hpp"

#include "QuestTrackerSubEntry_classes.hpp"
#include "QuestTrackerSubEntry_parameters.hpp"


namespace SDK
{

// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.ExecuteUbergraph_QuestTrackerSubEntry
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTrackerSubEntry_C::ExecuteUbergraph_QuestTrackerSubEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "ExecuteUbergraph_QuestTrackerSubEntry");

	Params::QuestTrackerSubEntry_C_ExecuteUbergraph_QuestTrackerSubEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.PostCompletionDelay
// (BlueprintCallable, BlueprintEvent)

void UQuestTrackerSubEntry_C::PostCompletionDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "PostCompletionDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnCompletionFlashFInished
// (BlueprintCallable, BlueprintEvent)

void UQuestTrackerSubEntry_C::OnCompletionFlashFInished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "OnCompletionFlashFInished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnPlayObjectiveCompletedAnimation
// (Event, Protected, BlueprintEvent)

void UQuestTrackerSubEntry_C::OnPlayObjectiveCompletedAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "OnPlayObjectiveCompletedAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.OnQuestsUpdated
// (Event, Protected, BlueprintEvent)

void UQuestTrackerSubEntry_C::OnQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "OnQuestsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestTrackerSubEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.UpdateObjectiveText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestTrackerSubEntry_C::UpdateObjectiveText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "UpdateObjectiveText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HideIfEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestTrackerSubEntry_C::HideIfEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "HideIfEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.HandleRemoveFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestTrackerSubEntry_C::HandleRemoveFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "HandleRemoveFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTrackerSubEntry.QuestTrackerSubEntry_C.GetHeightEstimate
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UQuestTrackerSubEntry_C::GetHeightEstimate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTrackerSubEntry_C", "GetHeightEstimate");

	Params::QuestTrackerSubEntry_C_GetHeightEstimate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

