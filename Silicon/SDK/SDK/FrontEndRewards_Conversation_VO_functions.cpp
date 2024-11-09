#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Conversation_VO

#include "Basic.hpp"

#include "FrontEndRewards_Conversation_VO_classes.hpp"
#include "FrontEndRewards_Conversation_VO_parameters.hpp"


namespace SDK
{

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PopulateFromConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*                Param_Conversation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Conversation_VO_C::PopulateFromConversation(class UFortConversation* Param_Conversation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "PopulateFromConversation");

	Params::FrontEndRewards_Conversation_VO_C_PopulateFromConversation Parms{};

	Parms.Param_Conversation = Param_Conversation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleReplayAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Committed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Conversation_VO_C::HandleReplayAction(bool* Committed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "HandleReplayAction");

	Params::FrontEndRewards_Conversation_VO_C_HandleReplayAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.StopConversation
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Conversation_VO_C::StopConversation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "StopConversation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleNewSentence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence        Sentence                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFrontEndRewards_Conversation_VO_C::HandleNewSentence(const struct FFortConversationSentence& Sentence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "HandleNewSentence");

	Params::FrontEndRewards_Conversation_VO_C_HandleNewSentence Parms{};

	Parms.Sentence = std::move(Sentence);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleConversationFinished
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Conversation_VO_C::HandleConversationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "HandleConversationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PlayConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*                   QuestItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Conversation_VO_C::PlayConversation(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "PlayConversation");

	Params::FrontEndRewards_Conversation_VO_C_PlayConversation Parms{};

	Parms.QuestItem = QuestItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.CreateConversationActor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C*NewAnnoucement                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Conversation_VO_C::CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "CreateConversationActor");

	Params::FrontEndRewards_Conversation_VO_C_CreateConversationActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewAnnoucement != nullptr)
		*NewAnnoucement = Parms.NewAnnoucement;
}

}

