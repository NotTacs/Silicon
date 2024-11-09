#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestProgressWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.ExecuteUbergraph_DailyQuestProgressWidget
// 0x000C (0x000C - 0x0000)
struct DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget) == 0x000004, "Wrong alignment on DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget");
static_assert(sizeof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget) == 0x00000C, "Wrong size on DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, EntryPoint) == 0x000000, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, Temp_bool_Variable) == 0x000004, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, Temp_byte_Variable) == 0x000005, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, Temp_byte_Variable2) == 0x000006, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, Temp_bool_Variable2) == 0x000007, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, Temp_byte_Variable3) == 0x000008, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, Temp_byte_Variable4) == 0x000009, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, K2Node_Select_Default) == 0x00000A, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget, K2Node_Select2_Default) == 0x00000B, "Member 'DailyQuestProgressWidget_C_ExecuteUbergraph_DailyQuestProgressWidget::K2Node_Select2_Default' has a wrong offset!");

// Function DailyQuestProgressWidget.DailyQuestProgressWidget_C.Update
// 0x0120 (0x0120 - 0x0000)
struct DailyQuestProgressWidget_C_Update final
{
public:
	int32                                         Required;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Achieved;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Current;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Total;                                             // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x0078(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0098(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ZeroConstructor, ReferenceParm)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F8(0x0018)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyQuestProgressWidget_C_Update) == 0x000008, "Wrong alignment on DailyQuestProgressWidget_C_Update");
static_assert(sizeof(DailyQuestProgressWidget_C_Update) == 0x000120, "Wrong size on DailyQuestProgressWidget_C_Update");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, Required) == 0x000000, "Member 'DailyQuestProgressWidget_C_Update::Required' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, Achieved) == 0x000004, "Member 'DailyQuestProgressWidget_C_Update::Achieved' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, Current) == 0x000008, "Member 'DailyQuestProgressWidget_C_Update::Current' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, Total) == 0x00000C, "Member 'DailyQuestProgressWidget_C_Update::Total' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000030, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'DailyQuestProgressWidget_C_Update::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_Conv_IntToText_ReturnValue2) == 0x000078, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000090, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, K2Node_MakeStruct_FormatArgumentData2) == 0x000098, "Member 'DailyQuestProgressWidget_C_Update::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_Max_ReturnValue) == 0x0000D8, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, K2Node_MakeArray_Array) == 0x0000E0, "Member 'DailyQuestProgressWidget_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x0000F0, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000110, "Member 'DailyQuestProgressWidget_C_Update::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, Temp_bool_Variable) == 0x000114, "Member 'DailyQuestProgressWidget_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyQuestProgressWidget_C_Update, K2Node_Select_Default) == 0x000118, "Member 'DailyQuestProgressWidget_C_Update::K2Node_Select_Default' has a wrong offset!");

}

