#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectCycleWidget

#include "Basic.hpp"

#include "ItemInspectCycleWidget_classes.hpp"
#include "ItemInspectCycleWidget_parameters.hpp"


namespace SDK
{

// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.ExecuteUbergraph_ItemInspectCycleWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::ExecuteUbergraph_ItemInspectCycleWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "ExecuteUbergraph_ItemInspectCycleWidget");

	Params::ItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature");

	Params::ItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature");

	Params::ItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.OnItemCycled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                        OldItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        NewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OffsetFromPreviousItem                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "OnItemCycled");

	Params::ItemInspectCycleWidget_C_OnItemCycled Parms{};

	Parms.OldItem = OldItem;
	Parms.NewItem = NewItem;
	Parms.OffsetFromPreviousItem = OffsetFromPreviousItem;

	UObject::ProcessEvent(Func, &Parms);
}

}

