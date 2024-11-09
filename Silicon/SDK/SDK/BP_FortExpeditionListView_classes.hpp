#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionListView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionListView.BP_FortExpeditionListView_C
// 0x0028 (0x0270 - 0x0248)
class UBP_FortExpeditionListView_C final : public UFortExpeditionListViewWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                   OnItemClicked;                                     // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnItemHovered;                                     // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnItemClicked__DelegateSignature(class UObject* Item);
	void OnItemHovered__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_BP_FortExpeditionListView(int32 EntryPoint);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_10_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_52_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_6_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionListView_C">();
	}
	static class UBP_FortExpeditionListView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionListView_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionListView_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionListView_C");
static_assert(sizeof(UBP_FortExpeditionListView_C) == 0x000270, "Wrong size on UBP_FortExpeditionListView_C");
static_assert(offsetof(UBP_FortExpeditionListView_C, UberGraphFrame) == 0x000248, "Member 'UBP_FortExpeditionListView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListView_C, OnItemClicked) == 0x000250, "Member 'UBP_FortExpeditionListView_C::OnItemClicked' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListView_C, OnItemHovered) == 0x000260, "Member 'UBP_FortExpeditionListView_C::OnItemHovered' has a wrong offset!");

}

