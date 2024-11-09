#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoinServer

#include "Basic.hpp"

#include "JoinServer_classes.hpp"
#include "JoinServer_parameters.hpp"


namespace SDK
{

// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ExecuteUbergraph_JoinServer");

	Params::JoinServer_C_ExecuteUbergraph_JoinServer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState                            PreviousUIState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::OnEnterState(EFortUIState PreviousUIState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "OnEnterState");

	Params::JoinServer_C_OnEnterState Parms{};

	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJoinServer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UJoinServer_C::HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleClientEvent_OnboardingStartMatchmaking");

	Params::JoinServer_C_HandleClientEvent_OnboardingStartMatchmaking Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.HandleRequestAbandon
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleRequestAbandon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleRequestAbandon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HandleRequestRejoinRetry
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleRequestRejoinRetry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleRequestRejoinRetry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UJoinServer_C::HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleClientEvent_RejoinStart");

	Params::JoinServer_C_HandleClientEvent_RejoinStart Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.ShowSkipTutorial
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowSkipTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ShowSkipTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.RequestTutorialRetry
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::RequestTutorialRetry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "RequestTutorialRetry");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnSuccess_C91A02504569664A4B1E259E5F57A79D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "OnSuccess_C91A02504569664A4B1E259E5F57A79D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnFailure_C91A02504569664A4B1E259E5F57A79D()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "OnFailure_C91A02504569664A4B1E259E5F57A79D");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnSuccess_B419884742513722D11D8AB4D90DE5E2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "OnSuccess_B419884742513722D11D8AB4D90DE5E2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnFailure_B419884742513722D11D8AB4D90DE5E2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "OnFailure_B419884742513722D11D8AB4D90DE5E2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF");

	Params::JoinServer_C_DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HandleMatchmakingComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult              Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::HandleMatchmakingComplete(EMatchmakingCompleteResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleMatchmakingComplete");

	Params::JoinServer_C_HandleMatchmakingComplete Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.HandleMatchmakingStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingState                       OldState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMatchmakingState                       NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::HandleMatchmakingStateChange(EMatchmakingState OldState, EMatchmakingState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleMatchmakingStateChange");

	Params::JoinServer_C_HandleMatchmakingStateChange Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.HandleLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleLobbyDisconnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleLobbyDisconnected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HandleEnterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIState                            PreviousState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::HandleEnterState(EFortUIState PreviousState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleEnterState");

	Params::JoinServer_C_HandleEnterState Parms{};

	Parms.PreviousState = PreviousState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::StartTutorialMatchmakingFlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "StartTutorialMatchmakingFlow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.SkipTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::SkipTutorial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "SkipTutorial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TimeRemaining                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::HandleLobbyTimeUpdated(int32 TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleLobbyTimeUpdated");

	Params::JoinServer_C_HandleLobbyTimeUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.GetMatchmakingError
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMatchmakingCompleteResult              MatchMakingError                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ErrorText                                              (Parm, OutParm)

void UJoinServer_C::GetMatchmakingError(EMatchmakingCompleteResult MatchMakingError, class FText* ErrorText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "GetMatchmakingError");

	Params::JoinServer_C_GetMatchmakingError Parms{};

	Parms.MatchMakingError = MatchMakingError;

	UObject::ProcessEvent(Func, &Parms);

	if (ErrorText != nullptr)
		*ErrorText = std::move(Parms.ErrorText);
}


// Function JoinServer.JoinServer_C.ShowTutorialCanceled
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowTutorialCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ShowTutorialCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HandleGetMainMenuContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UJoinServer_C::HandleGetMainMenuContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleGetMainMenuContent");

	Params::JoinServer_C_HandleGetMainMenuContent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function JoinServer.JoinServer_C.ShowRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowRejoinWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ShowRejoinWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.HideRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_AbandonSession                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinServer_C::HideRejoinWindow(bool Param_AbandonSession)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HideRejoinWindow");

	Params::JoinServer_C_HideRejoinWindow Parms{};

	Parms.Param_AbandonSession = Param_AbandonSession;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.ShowRejoiningProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowRejoiningProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ShowRejoiningProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinSession
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowRetryRejoinSession()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ShowRetryRejoinSession");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Failure                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    AllowRetry                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJoinServer_C::ShowRetryRejoinWindow(const class FText& Failure, bool AllowRetry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ShowRetryRejoinWindow");

	Params::JoinServer_C_ShowRetryRejoinWindow Parms{};

	Parms.Failure = std::move(Failure);
	Parms.AllowRetry = AllowRetry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleLobbyConnectingToGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "HandleLobbyConnectingToGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function JoinServer.JoinServer_C.ShowAbandoningProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowAbandoningProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JoinServer_C", "ShowAbandoningProgress");

	UObject::ProcessEvent(Func, nullptr);
}

}

