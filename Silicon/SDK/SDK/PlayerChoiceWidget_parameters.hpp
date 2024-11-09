#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerChoiceWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SurvivorStoryChoiceSelected__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature final
{
public:
	int32                                         Param_SelectedChoice;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature) == 0x000004, "Wrong alignment on PlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature");
static_assert(sizeof(PlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature) == 0x000004, "Wrong size on PlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature");
static_assert(offsetof(PlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature, Param_SelectedChoice) == 0x000000, "Member 'PlayerChoiceWidget_C_SurvivorStoryChoiceSelected__DelegateSignature::Param_SelectedChoice' has a wrong offset!");

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ExecuteUbergraph_PlayerChoiceWidget
// 0x00D8 (0x00D8 - 0x0000)
struct PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ChoiceID;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FChoiceData                            K2Node_Event_ChoiceItems;                          // 0x0018(0x0030)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FChoiceDataEntry                       CallFunc_Array_Get_Item;                           // 0x0050(0x0050)()
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerChoiceButtonWidget_C*            CallFunc_CreateButtonAndSetText_ReturnValue;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue2;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller2;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget) == 0x000008, "Wrong alignment on PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget");
static_assert(sizeof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget) == 0x0000D8, "Wrong size on PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, EntryPoint) == 0x000000, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, Temp_int_Array_Index_Variable) == 0x000004, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, K2Node_CustomEvent_ChoiceID) == 0x000010, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::K2Node_CustomEvent_ChoiceID' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, K2Node_Event_ChoiceItems) == 0x000018, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::K2Node_Event_ChoiceItems' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000048, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, CallFunc_Array_Get_Item) == 0x000050, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, K2Node_DynamicCast_AsFort_Player_Controller) == 0x0000A0, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, CallFunc_CreateButtonAndSetText_ReturnValue) == 0x0000B0, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::CallFunc_CreateButtonAndSetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, CallFunc_Array_Length_ReturnValue) == 0x0000B8, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, CallFunc_Less_IntInt_ReturnValue) == 0x0000BC, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, CallFunc_GetOwningPlayer_ReturnValue2) == 0x0000C0, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::CallFunc_GetOwningPlayer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, K2Node_DynamicCast_AsFort_Player_Controller2) == 0x0000C8, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::K2Node_DynamicCast_AsFort_Player_Controller2' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget, K2Node_DynamicCast_bSuccess2) == 0x0000D0, "Member 'PlayerChoiceWidget_C_ExecuteUbergraph_PlayerChoiceWidget::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.ChoiceSelected
// 0x0004 (0x0004 - 0x0000)
struct PlayerChoiceWidget_C_ChoiceSelected final
{
public:
	int32                                         ChoiceID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerChoiceWidget_C_ChoiceSelected) == 0x000004, "Wrong alignment on PlayerChoiceWidget_C_ChoiceSelected");
static_assert(sizeof(PlayerChoiceWidget_C_ChoiceSelected) == 0x000004, "Wrong size on PlayerChoiceWidget_C_ChoiceSelected");
static_assert(offsetof(PlayerChoiceWidget_C_ChoiceSelected, ChoiceID) == 0x000000, "Member 'PlayerChoiceWidget_C_ChoiceSelected::ChoiceID' has a wrong offset!");

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.CreateButtonAndSetText
// 0x0070 (0x0070 - 0x0000)
struct PlayerChoiceWidget_C_CreateButtonAndSetText final
{
public:
	struct FChoiceDataEntry                       ChoiceData;                                        // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         ChoiceID;                                          // 0x0050(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerChoiceButtonWidget_C*            ReturnValue;                                       // 0x0058(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerChoiceButtonWidget_C*            CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerChoiceWidget_C_CreateButtonAndSetText) == 0x000008, "Wrong alignment on PlayerChoiceWidget_C_CreateButtonAndSetText");
static_assert(sizeof(PlayerChoiceWidget_C_CreateButtonAndSetText) == 0x000070, "Wrong size on PlayerChoiceWidget_C_CreateButtonAndSetText");
static_assert(offsetof(PlayerChoiceWidget_C_CreateButtonAndSetText, ChoiceData) == 0x000000, "Member 'PlayerChoiceWidget_C_CreateButtonAndSetText::ChoiceData' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_CreateButtonAndSetText, ChoiceID) == 0x000050, "Member 'PlayerChoiceWidget_C_CreateButtonAndSetText::ChoiceID' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_CreateButtonAndSetText, ReturnValue) == 0x000058, "Member 'PlayerChoiceWidget_C_CreateButtonAndSetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_CreateButtonAndSetText, CallFunc_Create_ReturnValue) == 0x000060, "Member 'PlayerChoiceWidget_C_CreateButtonAndSetText::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerChoiceWidget_C_CreateButtonAndSetText, CallFunc_AddChild_ReturnValue) == 0x000068, "Member 'PlayerChoiceWidget_C_CreateButtonAndSetText::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.GetText_0
// 0x0018 (0x0018 - 0x0000)
struct PlayerChoiceWidget_C_GetText_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(PlayerChoiceWidget_C_GetText_0) == 0x000008, "Wrong alignment on PlayerChoiceWidget_C_GetText_0");
static_assert(sizeof(PlayerChoiceWidget_C_GetText_0) == 0x000018, "Wrong size on PlayerChoiceWidget_C_GetText_0");
static_assert(offsetof(PlayerChoiceWidget_C_GetText_0, ReturnValue) == 0x000000, "Member 'PlayerChoiceWidget_C_GetText_0::ReturnValue' has a wrong offset!");

// Function PlayerChoiceWidget.PlayerChoiceWidget_C.SetChoices
// 0x0030 (0x0030 - 0x0000)
struct PlayerChoiceWidget_C_SetChoices final
{
public:
	struct FChoiceData                            ChoiceItems;                                       // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerChoiceWidget_C_SetChoices) == 0x000008, "Wrong alignment on PlayerChoiceWidget_C_SetChoices");
static_assert(sizeof(PlayerChoiceWidget_C_SetChoices) == 0x000030, "Wrong size on PlayerChoiceWidget_C_SetChoices");
static_assert(offsetof(PlayerChoiceWidget_C_SetChoices, ChoiceItems) == 0x000000, "Member 'PlayerChoiceWidget_C_SetChoices::ChoiceItems' has a wrong offset!");

}

