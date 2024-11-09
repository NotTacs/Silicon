#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabBrightnessOptions

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
// 0x0008 (0x0008 - 0x0000)
struct TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Slider_Value;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions) == 0x000004, "Wrong alignment on TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions");
static_assert(sizeof(TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions) == 0x000008, "Wrong size on TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions");
static_assert(offsetof(TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions, EntryPoint) == 0x000000, "Member 'TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions::EntryPoint' has a wrong offset!");
static_assert(offsetof(TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions, K2Node_ComponentBoundEvent_Slider_Value) == 0x000004, "Member 'TabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions::K2Node_ComponentBoundEvent_Slider_Value' has a wrong offset!");

// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature final
{
public:
	float                                         Slider_Value;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature) == 0x000004, "Wrong alignment on TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");
static_assert(sizeof(TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature) == 0x000004, "Wrong size on TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");
static_assert(offsetof(TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature, Slider_Value) == 0x000000, "Member 'TabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature::Slider_Value' has a wrong offset!");

// Function TabBrightnessOptions.TabBrightnessOptions_C.Update Data
// 0x0038 (0x0038 - 0x0000)
struct TabBrightnessOptions_C_Update_Data final
{
public:
	float                                         CallFunc_GetGammaSettings_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0008(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0020(0x0018)()
};
static_assert(alignof(TabBrightnessOptions_C_Update_Data) == 0x000008, "Wrong alignment on TabBrightnessOptions_C_Update_Data");
static_assert(sizeof(TabBrightnessOptions_C_Update_Data) == 0x000038, "Wrong size on TabBrightnessOptions_C_Update_Data");
static_assert(offsetof(TabBrightnessOptions_C_Update_Data, CallFunc_GetGammaSettings_ReturnValue) == 0x000000, "Member 'TabBrightnessOptions_C_Update_Data::CallFunc_GetGammaSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabBrightnessOptions_C_Update_Data, CallFunc_GetEmptyText_ReturnValue) == 0x000008, "Member 'TabBrightnessOptions_C_Update_Data::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabBrightnessOptions_C_Update_Data, CallFunc_MakeLiteralText_ReturnValue) == 0x000020, "Member 'TabBrightnessOptions_C_Update_Data::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");

// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
// 0x0088 (0x0088 - 0x0000)
struct TabBrightnessOptions_C_Set_Default_Call_Out final
{
public:
	float                                         CallFunc_GetDefaultGammaSettings_ReturnValue;      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(TabBrightnessOptions_C_Set_Default_Call_Out) == 0x000008, "Wrong alignment on TabBrightnessOptions_C_Set_Default_Call_Out");
static_assert(sizeof(TabBrightnessOptions_C_Set_Default_Call_Out) == 0x000088, "Wrong size on TabBrightnessOptions_C_Set_Default_Call_Out");
static_assert(offsetof(TabBrightnessOptions_C_Set_Default_Call_Out, CallFunc_GetDefaultGammaSettings_ReturnValue) == 0x000000, "Member 'TabBrightnessOptions_C_Set_Default_Call_Out::CallFunc_GetDefaultGammaSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabBrightnessOptions_C_Set_Default_Call_Out, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'TabBrightnessOptions_C_Set_Default_Call_Out::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TabBrightnessOptions_C_Set_Default_Call_Out, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'TabBrightnessOptions_C_Set_Default_Call_Out::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TabBrightnessOptions_C_Set_Default_Call_Out, K2Node_MakeArray_Array) == 0x000060, "Member 'TabBrightnessOptions_C_Set_Default_Call_Out::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TabBrightnessOptions_C_Set_Default_Call_Out, CallFunc_Format_ReturnValue) == 0x000070, "Member 'TabBrightnessOptions_C_Set_Default_Call_Out::CallFunc_Format_ReturnValue' has a wrong offset!");

}

