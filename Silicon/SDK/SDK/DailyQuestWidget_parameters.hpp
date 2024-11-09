#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
// 0x0038 (0x0038 - 0x0000)
struct DailyQuestWidget_C_SetQuestItem final
{
public:
	class UFortQuestItem*                         Param_Quest;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuestType                                CallFunc_GetQuestType_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyQuestWidget_C_SetQuestItem) == 0x000008, "Wrong alignment on DailyQuestWidget_C_SetQuestItem");
static_assert(sizeof(DailyQuestWidget_C_SetQuestItem) == 0x000038, "Wrong size on DailyQuestWidget_C_SetQuestItem");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, Param_Quest) == 0x000000, "Member 'DailyQuestWidget_C_SetQuestItem::Param_Quest' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetQuestDefinitionBP_ReturnValue) == 0x000008, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetQuestDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetQuestType_ReturnValue) == 0x000010, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetQuestType_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'DailyQuestWidget_C_SetQuestItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_SetQuestItem, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'DailyQuestWidget_C_SetQuestItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function DailyQuestWidget.DailyQuestWidget_C.FilterObjectives
// 0x0028 (0x0028 - 0x0000)
struct DailyQuestWidget_C_FilterObjectives final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestObjectiveInfo*                CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisibleToUser_ReturnValue;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyQuestWidget_C_FilterObjectives) == 0x000008, "Wrong alignment on DailyQuestWidget_C_FilterObjectives");
static_assert(sizeof(DailyQuestWidget_C_FilterObjectives) == 0x000028, "Wrong size on DailyQuestWidget_C_FilterObjectives");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, Temp_int_Array_Index_Variable) == 0x000000, "Member 'DailyQuestWidget_C_FilterObjectives::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'DailyQuestWidget_C_FilterObjectives::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_Array_Get_Item) == 0x000010, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_Array_Add_ReturnValue) == 0x00001C, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_IsVisibleToUser_ReturnValue) == 0x000021, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_IsVisibleToUser_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_IsActive_ReturnValue) == 0x000022, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_FilterObjectives, CallFunc_BooleanAND_ReturnValue) == 0x000023, "Member 'DailyQuestWidget_C_FilterObjectives::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function DailyQuestWidget.DailyQuestWidget_C.UpdateObjectiveWidgets
// 0x0030 (0x0030 - 0x0000)
struct DailyQuestWidget_C_UpdateObjectiveWidgets final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDailyQuestObjectiveEntry_C*            K2Node_DynamicCast_AsDaily_Quest_Objective_Entry;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestWidget_C_UpdateObjectiveWidgets) == 0x000008, "Wrong alignment on DailyQuestWidget_C_UpdateObjectiveWidgets");
static_assert(sizeof(DailyQuestWidget_C_UpdateObjectiveWidgets) == 0x000030, "Wrong size on DailyQuestWidget_C_UpdateObjectiveWidgets");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, Temp_int_Variable) == 0x000000, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, K2Node_DynamicCast_AsDaily_Quest_Objective_Entry) == 0x000018, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::K2Node_DynamicCast_AsDaily_Quest_Objective_Entry' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_UpdateObjectiveWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'DailyQuestWidget_C_UpdateObjectiveWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function DailyQuestWidget.DailyQuestWidget_C.CreateAllObjectiveWidgets
// 0x0038 (0x0038 - 0x0000)
struct DailyQuestWidget_C_CreateAllObjectiveWidgets final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*                CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyQuestObjectiveEntry_C*            CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestWidget_C_CreateAllObjectiveWidgets) == 0x000008, "Wrong alignment on DailyQuestWidget_C_CreateAllObjectiveWidgets");
static_assert(sizeof(DailyQuestWidget_C_CreateAllObjectiveWidgets) == 0x000038, "Wrong size on DailyQuestWidget_C_CreateAllObjectiveWidgets");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, Temp_int_Array_Index_Variable) == 0x000000, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, CallFunc_Array_Get_Item) == 0x000018, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, CallFunc_Create_ReturnValue) == 0x000020, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestWidget_C_CreateAllObjectiveWidgets, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'DailyQuestWidget_C_CreateAllObjectiveWidgets::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

