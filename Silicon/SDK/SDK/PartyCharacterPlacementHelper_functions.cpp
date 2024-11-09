#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyCharacterPlacementHelper

#include "Basic.hpp"

#include "PartyCharacterPlacementHelper_classes.hpp"
#include "PartyCharacterPlacementHelper_parameters.hpp"


namespace SDK
{

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "NewEventDispatcher_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::ExecuteUbergraph_PartyCharacterPlacementHelper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "ExecuteUbergraph_PartyCharacterPlacementHelper");

	Params::PartyCharacterPlacementHelper_C_ExecuteUbergraph_PartyCharacterPlacementHelper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "HandleClientEvent_StoreTabSelected");

	Params::PartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabSelected Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "HandleClientEvent_StoreTabClosed");

	Params::PartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabClosed Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APartyCharacterPlacementHelper_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerHovered(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerHovered");

	Params::PartyCharacterPlacementHelper_C_OnLobbyPlayerHovered Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerSelected(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerSelected");

	Params::PartyCharacterPlacementHelper_C_OnLobbyPlayerSelected Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnselected(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerUnselected");

	Params::PartyCharacterPlacementHelper_C_OnLobbyPlayerUnselected Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializeContextEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "InitializeContextEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializePadUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "InitializePadUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnLobbyStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnFrontEndCameraChanged");

	Params::PartyCharacterPlacementHelper_C_OnFrontEndCameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              TeamMemberInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void APartyCharacterPlacementHelper_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnTeamMemberAdded");

	Params::PartyCharacterPlacementHelper_C_OnTeamMemberAdded Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamMemberRemovedInt                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::OnTeamMemberRemoved(int32 TeamMemberRemovedInt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnTeamMemberRemoved");

	Params::PartyCharacterPlacementHelper_C_OnTeamMemberRemoved Parms{};

	Parms.TeamMemberRemovedInt = TeamMemberRemovedInt;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              TeamMemberInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void APartyCharacterPlacementHelper_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnTeamMemberStateChanged");

	Params::PartyCharacterPlacementHelper_C_OnTeamMemberStateChanged Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnhovered(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyPlayerUnhovered");

	Params::PartyCharacterPlacementHelper_C_OnLobbyPlayerUnhovered Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializeWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "InitializeWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::RefreshWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "RefreshWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnLobbyDisconnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnLobbyDisconnected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartyMemberIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APartyCharacterPlacementHelper_C::PlayLobbyAnimation(int32 PartyMemberIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "PlayLobbyAnimation");

	Params::PartyCharacterPlacementHelper_C_PlayLobbyAnimation Parms{};

	Parms.PartyMemberIndex = PartyMemberIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsInLobby                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::IsInLobby(bool* Param_IsInLobby)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "IsInLobby");

	Params::PartyCharacterPlacementHelper_C_IsInLobby Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsInLobby != nullptr)
		*Param_IsInLobby = Parms.Param_IsInLobby;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APartyCharacterPlacementHelper_C::CompletedQuestPrerequisites(bool* bCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "CompletedQuestPrerequisites");

	Params::PartyCharacterPlacementHelper_C_CompletedQuestPrerequisites Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCompleted != nullptr)
		*bCompleted = Parms.bCompleted;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              MemberInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::OnPartyDataChanged(struct FFortTeamMemberInfo& MemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "OnPartyDataChanged");

	Params::PartyCharacterPlacementHelper_C_OnPartyDataChanged Parms{};

	Parms.MemberInfo = std::move(MemberInfo);

	UObject::ProcessEvent(Func, &Parms);

	MemberInfo = std::move(Parms.MemberInfo);
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Refresh Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              Team_Info                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void APartyCharacterPlacementHelper_C::Refresh_Lights(const struct FFortTeamMemberInfo& Team_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyCharacterPlacementHelper_C", "Refresh Lights");

	Params::PartyCharacterPlacementHelper_C_Refresh_Lights Parms{};

	Parms.Team_Info = std::move(Team_Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

