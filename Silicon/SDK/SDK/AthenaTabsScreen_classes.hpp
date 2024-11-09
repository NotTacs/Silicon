#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTabsScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTabsScreen.AthenaTabsScreen_C
// 0x0028 (0x0478 - 0x0450)
class UAthenaTabsScreen_C final : public UFortAthenaTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                  TopTabContentWidgetSwitcher;                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   LastActiveTabId;                                   // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UnclaimedResearchBangThreshold;                    // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           UnclaimedResearchPointsHandle;                     // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaTabsScreen(int32 EntryPoint);
	void HandleTabContentCreated(class FName TabId, class UCommonUserWidget* TabWidget);
	void OnDeactivated();
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void OnActivated();
	void HandleTabCreated(class FName TabId, class UCommonButton* TabButton);
	void HandleTabSelected(class FName TabName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTabsScreen_C">();
	}
	static class UAthenaTabsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTabsScreen_C>();
	}
};
static_assert(alignof(UAthenaTabsScreen_C) == 0x000008, "Wrong alignment on UAthenaTabsScreen_C");
static_assert(sizeof(UAthenaTabsScreen_C) == 0x000478, "Wrong size on UAthenaTabsScreen_C");
static_assert(offsetof(UAthenaTabsScreen_C, UberGraphFrame) == 0x000450, "Member 'UAthenaTabsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaTabsScreen_C, TopTabContentWidgetSwitcher) == 0x000458, "Member 'UAthenaTabsScreen_C::TopTabContentWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaTabsScreen_C, LastActiveTabId) == 0x000460, "Member 'UAthenaTabsScreen_C::LastActiveTabId' has a wrong offset!");
static_assert(offsetof(UAthenaTabsScreen_C, UnclaimedResearchBangThreshold) == 0x000468, "Member 'UAthenaTabsScreen_C::UnclaimedResearchBangThreshold' has a wrong offset!");
static_assert(offsetof(UAthenaTabsScreen_C, UnclaimedResearchPointsHandle) == 0x000470, "Member 'UAthenaTabsScreen_C::UnclaimedResearchPointsHandle' has a wrong offset!");

}

