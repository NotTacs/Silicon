#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PopupCenterMessageWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.ExecuteUbergraph_PopupCenterMessageWidget
// 0x0038 (0x0038 - 0x0000)
struct PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECenterPopupMessageStateEnum                  K2Node_Event_NewState;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonActivatablePanel*                K2Node_Event_ModalPopup;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPopupCenterMessageModalPanel_C*        K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor)
};
static_assert(alignof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget) == 0x000008, "Wrong alignment on PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget");
static_assert(sizeof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget) == 0x000038, "Wrong size on PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget");
static_assert(offsetof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget, EntryPoint) == 0x000000, "Member 'PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget, K2Node_Event_NewState) == 0x000004, "Member 'PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget, K2Node_Event_ModalPopup) == 0x000008, "Member 'PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget::K2Node_Event_ModalPopup' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget, K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel) == 0x000010, "Member 'PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget::K2Node_DynamicCast_AsPopup_Center_Message_Modal_Panel' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'PopupCenterMessageWidget_C_ExecuteUbergraph_PopupCenterMessageWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function PopupCenterMessageWidget.PopupCenterMessageWidget_C.OnModalDisplayed
// 0x0010 (0x0010 - 0x0000)
struct PopupCenterMessageWidget_C_OnModalDisplayed final
{
public:
	ECenterPopupMessageStateEnum                  NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonActivatablePanel*                ModalPopup;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PopupCenterMessageWidget_C_OnModalDisplayed) == 0x000008, "Wrong alignment on PopupCenterMessageWidget_C_OnModalDisplayed");
static_assert(sizeof(PopupCenterMessageWidget_C_OnModalDisplayed) == 0x000010, "Wrong size on PopupCenterMessageWidget_C_OnModalDisplayed");
static_assert(offsetof(PopupCenterMessageWidget_C_OnModalDisplayed, NewState) == 0x000000, "Member 'PopupCenterMessageWidget_C_OnModalDisplayed::NewState' has a wrong offset!");
static_assert(offsetof(PopupCenterMessageWidget_C_OnModalDisplayed, ModalPopup) == 0x000008, "Member 'PopupCenterMessageWidget_C_OnModalDisplayed::ModalPopup' has a wrong offset!");

}

