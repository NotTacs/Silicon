#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestInfo_BulletListEntry

#include "Basic.hpp"

#include "QuestInfo_BulletListEntry_classes.hpp"
#include "QuestInfo_BulletListEntry_parameters.hpp"


namespace SDK
{

// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             EntryText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestInfo_BulletListEntry_C::InitBullet(const class FText& EntryText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "InitBullet");

	Params::QuestInfo_BulletListEntry_C_InitBullet Parms{};

	Parms.EntryText = std::move(EntryText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             EntryText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                      EntryIconBrush                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestInfo_BulletListEntry_C::InitBrush(const class FText& EntryText, const struct FSlateBrush& EntryIconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "InitBrush");

	Params::QuestInfo_BulletListEntry_C_InitBrush Parms{};

	Parms.EntryText = std::move(EntryText);
	Parms.EntryIconBrush = std::move(EntryIconBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InImageSize                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UQuestInfo_BulletListEntry_C::CalcBrushSize(const struct FVector2D& InImageSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "CalcBrushSize");

	Params::QuestInfo_BulletListEntry_C_CalcBrushSize Parms{};

	Parms.InImageSize = std::move(InImageSize);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestInfo_BulletListEntry_C::ShowBorder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "ShowBorder");

	UObject::ProcessEvent(Func, nullptr);
}

}

