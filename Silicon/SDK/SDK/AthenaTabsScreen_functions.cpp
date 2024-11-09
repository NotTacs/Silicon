#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTabsScreen

#include "Basic.hpp"

#include "AthenaTabsScreen_classes.hpp"
#include "AthenaTabsScreen_parameters.hpp"


namespace SDK
{

// Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::ExecuteUbergraph_AthenaTabsScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "ExecuteUbergraph_AthenaTabsScreen");

	Params::AthenaTabsScreen_C_ExecuteUbergraph_AthenaTabsScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabContentCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*                TabWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabContentCreated(class FName TabId, class UCommonUserWidget* TabWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabContentCreated");

	Params::AthenaTabsScreen_C_HandleTabContentCreated Parms{};

	Parms.TabId = TabId;
	Parms.TabWidget = TabWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaTabsScreen_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::AthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	Params::AthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTabsScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaTabsScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabCreated(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabCreated");

	Params::AthenaTabsScreen_C_HandleTabCreated Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTabsScreen_C::HandleTabSelected(class FName TabName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTabsScreen_C", "HandleTabSelected");

	Params::AthenaTabsScreen_C_HandleTabSelected Parms{};

	Parms.TabName = TabName;

	UObject::ProcessEvent(Func, &Parms);
}

}

