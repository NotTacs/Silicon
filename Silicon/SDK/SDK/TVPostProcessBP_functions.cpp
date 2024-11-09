#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TVPostProcessBP

#include "Basic.hpp"

#include "TVPostProcessBP_classes.hpp"
#include "TVPostProcessBP_parameters.hpp"


namespace SDK
{

// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteUbergraph_TVPostProcessBP");

	Params::TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATVPostProcessBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::JitterTheScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "JitterTheScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::FastForwardPostProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "FastForwardPostProcess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATVPostProcessBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "ReceiveTick");

	Params::TVPostProcessBP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DisableEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_InitializePost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_InitializePost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.SequenceFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SequenceName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ATVPostProcessBP_C::SequenceFinished(const class FString& SequenceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "SequenceFinished");

	Params::TVPostProcessBP_C_SequenceFinished Parms{};

	Parms.SequenceName = std::move(SequenceName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::WriteOutLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "WriteOutLoading");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_Sequence_Start_StaticWhoomp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_Sequence_Start_StaticWhoomp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_LoadAndWait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_LoadAndWait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::FrontEndCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_ReturningPlayerInitializeWithLiveVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_ReturningPlayerInitializeWithLiveVideo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_DosTextFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DosTextFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_StartTheMonitor_Text");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_DebugEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DebugEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_TransitionToLiveVideo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TransitionToLiveVideo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_TurnOffThePostProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TurnOffThePostProcess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_TransitionToLiveStatic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TransitionToLiveStatic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_SwitchBetweenLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_SwitchBetweenLocations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll
// (BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::Camera_TriggerTheTroll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TriggerTheTroll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::StartScreen__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "StartScreen__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::StartScreen__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "StartScreen__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::FrontEndCameraSwitchFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitchFade__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::FrontEndCameraSwitchFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitchFade__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Jitter_Timeline__Switch_Camera_Position__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Jitter Timeline__Switch Camera Position__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Jitter_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Jitter Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Jitter_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Jitter Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_StartTheMonitor_Text_Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_StartTheMonitor_Text_Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_static__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Switch to static__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_static__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Switch to static__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::FadeOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "FadeOut__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::FadeOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "FadeOut__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_live__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Switch to live__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Switch_to_live__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Switch to live__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Switch_between_cameras__Switch_Camera_Position__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Switch between cameras__Switch Camera Position__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Switch_between_cameras__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Switch between cameras__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Switch_between_cameras__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Switch between cameras__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Show_the_troll__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Show the troll__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc
// (BlueprintEvent)

void ATVPostProcessBP_C::Show_the_troll__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Show the troll__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATVPostProcessBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Use_Bluescreen                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Probablility_modulator                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Use_Flat_Blue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxColorPerChannelValue                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Control_replacement_alpha                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATVPostProcessBP_C::RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "RandomizeTheColor");

	Params::TVPostProcessBP_C_RandomizeTheColor Parms{};

	Parms.Use_Bluescreen = Use_Bluescreen;
	Parms.Probablility_modulator = Probablility_modulator;
	Parms.Use_Flat_Blue = Use_Flat_Blue;
	Parms.MaxColorPerChannelValue = MaxColorPerChannelValue;
	Parms.Control_replacement_alpha = Control_replacement_alpha;

	UObject::ProcessEvent(Func, &Parms);
}

}

