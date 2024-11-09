#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialRichText

#include "Basic.hpp"

#include "TutorialRichText_classes.hpp"
#include "TutorialRichText_parameters.hpp"


namespace SDK
{

// Function TutorialRichText.TutorialRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialRichText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialRichText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialRichText.TutorialRichText_C.ExecuteUbergraph_TutorialRichText
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialRichText_C::ExecuteUbergraph_TutorialRichText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialRichText_C", "ExecuteUbergraph_TutorialRichText");

	Params::TutorialRichText_C_ExecuteUbergraph_TutorialRichText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

