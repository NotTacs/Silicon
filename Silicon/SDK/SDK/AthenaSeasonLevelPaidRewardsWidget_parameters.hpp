#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonLevelPaidRewardsWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget
// 0x00C8 (0x00C8 - 0x0000)
struct AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue2;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                      CallFunc_GetRewardItems_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPaidUnlocked_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPaidClaimed_ReturnValue;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_FreeUnlocked;                         // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_PaidUnlocked;                         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable2;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable2;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaSeasonReward_C*                  CallFunc_Array_Get_Item2;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue2;                 // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaSeasonReward_C*                  CallFunc_Array_Get_Item3;                          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x008C(0x0010)(NoDestructor)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonReward_C*                  CallFunc_Create_ReturnValue;                       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue3;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue2;               // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPaidUnlocked_ReturnValue2;              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPaidClaimed_ReturnValue2;               // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget) == 0x000008, "Wrong alignment on AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget");
static_assert(sizeof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget) == 0x0000C8, "Wrong size on AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, EntryPoint) == 0x000000, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetLevelInfo_ReturnValue) == 0x000010, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetLevelInfo_ReturnValue2) == 0x000018, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetLevelInfo_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetRewardItems_ReturnValue) == 0x000020, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetRewardItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue) == 0x000030, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidUnlocked_ReturnValue) == 0x000038, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidClaimed_ReturnValue) == 0x000039, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidClaimed_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, K2Node_Event_FreeUnlocked) == 0x00003B, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::K2Node_Event_FreeUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, K2Node_Event_PaidUnlocked) == 0x00003C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::K2Node_Event_PaidUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Array_Index_Variable2) == 0x000040, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Array_Index_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Get_Item) == 0x000048, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Divide_IntInt_ReturnValue) == 0x000050, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Percent_IntInt_ReturnValue) == 0x000054, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, Temp_int_Loop_Counter_Variable2) == 0x000058, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::Temp_int_Loop_Counter_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Get_Item2) == 0x000060, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Add_IntInt_ReturnValue2) == 0x00006C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Length_ReturnValue2) == 0x000070, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Less_IntInt_ReturnValue2) == 0x000074, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Less_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Get_Item3) == 0x000078, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Get_Item3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000080, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, K2Node_MakeStruct_Margin) == 0x00008C, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000A0, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Create_ReturnValue) == 0x0000A8, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_GetLevelInfo_ReturnValue3) == 0x0000B0, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_GetLevelInfo_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue2) == 0x0000B8, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidUnlocked_ReturnValue2) == 0x0000B9, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidUnlocked_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_IsPaidClaimed_ReturnValue2) == 0x0000BA, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_IsPaidClaimed_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Not_PreBool_ReturnValue2) == 0x0000BB, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget, CallFunc_AddChildToGrid_ReturnValue) == 0x0000C0, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnLockedStatusChanged
// 0x0002 (0x0002 - 0x0000)
struct AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged final
{
public:
	bool                                          FreeUnlocked;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PaidUnlocked;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged) == 0x000001, "Wrong alignment on AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged");
static_assert(sizeof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged) == 0x000002, "Wrong size on AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged, FreeUnlocked) == 0x000000, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged::FreeUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged, PaidUnlocked) == 0x000001, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged::PaidUnlocked' has a wrong offset!");

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.UpdateStyling
// 0x0038 (0x0038 - 0x0000)
struct AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable2;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeUnlocked_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPaidUnlocked_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling) == 0x000008, "Wrong alignment on AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling");
static_assert(sizeof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling) == 0x000038, "Wrong size on AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_bool_Variable) == 0x000000, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_byte_Variable) == 0x000001, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_byte_Variable2) == 0x000002, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_bool_Variable2) == 0x000003, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_class_Variable) == 0x000008, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, Temp_class_Variable2) == 0x000010, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::Temp_class_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, CallFunc_GetLevelInfo_ReturnValue) == 0x000018, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::CallFunc_GetLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, CallFunc_IsFreeUnlocked_ReturnValue) == 0x000020, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::CallFunc_IsFreeUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, CallFunc_IsPaidUnlocked_ReturnValue) == 0x000021, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::CallFunc_IsPaidUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, K2Node_Select_Default) == 0x000028, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling, K2Node_Select2_Default) == 0x000030, "Member 'AthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling::K2Node_Select2_Default' has a wrong offset!");

}

