#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotGroup

#include "Basic.hpp"

#include "SquadSlotGroup_classes.hpp"
#include "SquadSlotGroup_parameters.hpp"


namespace SDK
{

// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::HandleMouseEnter__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "HandleMouseEnter__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotGroup.SquadSlotGroup_C.HandleMouseLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::HandleMouseLeave__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "HandleMouseLeave__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotGroup.SquadSlotGroup_C.ExecuteUbergraph_SquadSlotGroup
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotGroup_C::ExecuteUbergraph_SquadSlotGroup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "ExecuteUbergraph_SquadSlotGroup");

	Params::SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USquadSlotGroup_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "OnMouseLeave");

	Params::SquadSlotGroup_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USquadSlotGroup_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "OnMouseEnter");

	Params::SquadSlotGroup_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotGroup.SquadSlotGroup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadSlotGroup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "PreConstruct");

	Params::SquadSlotGroup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotGroup.SquadSlotGroup_C.AddSquadSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>                  SquadSlots                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void USquadSlotGroup_C::AddSquadSlots(TArray<class UWidget*>& SquadSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "AddSquadSlots");

	Params::SquadSlotGroup_C_AddSquadSlots Parms{};

	Parms.SquadSlots = std::move(SquadSlots);

	UObject::ProcessEvent(Func, &Parms);

	SquadSlots = std::move(Parms.SquadSlots);
}


// Function SquadSlotGroup.SquadSlotGroup_C.Update Squad Slot Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::Update_Squad_Slot_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "Update Squad Slot Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadSlotGroup.SquadSlotGroup_C.Get_SquadSlotBox_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USquadSlotGroup_C::Get_SquadSlotBox_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "Get_SquadSlotBox_ToolTipWidget");

	Params::SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SquadSlotGroup.SquadSlotGroup_C.SelectSquadSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotGroup_C::SelectSquadSlot(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "SelectSquadSlot");

	Params::SquadSlotGroup_C_SelectSquadSlot Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotGroup.SquadSlotGroup_C.DarkenAllSlotsExceptIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadSlotGroup_C::DarkenAllSlotsExceptIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "DarkenAllSlotsExceptIndex");

	Params::SquadSlotGroup_C_DarkenAllSlotsExceptIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadSlotGroup.SquadSlotGroup_C.RemoveDarkeningFromAllSlotsInGroup
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotGroup_C::RemoveDarkeningFromAllSlotsInGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadSlotGroup_C", "RemoveDarkeningFromAllSlotsInGroup");

	UObject::ProcessEvent(Func, nullptr);
}

}

