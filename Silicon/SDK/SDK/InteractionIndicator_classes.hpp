#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractionIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InteractionIndicator.InteractionIndicator_C
// 0x0038 (0x02A8 - 0x0270)
class UInteractionIndicator_C final : public UFortActorIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(Transient, DuplicateTransient)
	class UBasicInteractionWidget_C*              BasicInteractionWidget;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDMinusPickupItemWidget_C*            HUDMinusPickupItemWidget;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInteraction_DefenderBeacon_C*          Interaction_DefenderBeacon;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       KeybindWidget;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextUnderKeybindText;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInteractContextInfo*               CurrentInteraction;                                // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InteractionIndicator(int32 EntryPoint);
	void Destruct();
	void Construct();
	void HandleInteractionChanged(class UFortInteractContextInfo* Interaction);
	void ShowPickupWidget(class AFortPickup* Pickup);
	void ShowBasicInteractionWidget();
	void HandleInteractionUpdated(class UFortInteractContextInfo* Interaction);
	void ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap);
	void UpdateKeybinds();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractionIndicator_C">();
	}
	static class UInteractionIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractionIndicator_C>();
	}
};
static_assert(alignof(UInteractionIndicator_C) == 0x000008, "Wrong alignment on UInteractionIndicator_C");
static_assert(sizeof(UInteractionIndicator_C) == 0x0002A8, "Wrong size on UInteractionIndicator_C");
static_assert(offsetof(UInteractionIndicator_C, UberGraphFrame) == 0x000270, "Member 'UInteractionIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, BasicInteractionWidget) == 0x000278, "Member 'UInteractionIndicator_C::BasicInteractionWidget' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, HUDMinusPickupItemWidget) == 0x000280, "Member 'UInteractionIndicator_C::HUDMinusPickupItemWidget' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, Interaction_DefenderBeacon) == 0x000288, "Member 'UInteractionIndicator_C::Interaction_DefenderBeacon' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, KeybindWidget) == 0x000290, "Member 'UInteractionIndicator_C::KeybindWidget' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, TextUnderKeybindText) == 0x000298, "Member 'UInteractionIndicator_C::TextUnderKeybindText' has a wrong offset!");
static_assert(offsetof(UInteractionIndicator_C, CurrentInteraction) == 0x0002A0, "Member 'UInteractionIndicator_C::CurrentInteraction' has a wrong offset!");

}

