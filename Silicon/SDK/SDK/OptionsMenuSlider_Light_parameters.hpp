#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuSlider_Light

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.SliderChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature final
{
public:
	float                                         Slider_Value;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature, Slider_Value) == 0x000000, "Member 'OptionsMenuSlider_Light_C_SliderChanged__DelegateSignature::Slider_Value' has a wrong offset!");

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.ExecuteUbergraph_OptionsMenuSlider_Light
// 0x0178 (0x0178 - 0x0000)
struct OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent2;                          // 0x0018(0x0070)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0088(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C0(0x0070)()
	float                                         K2Node_ComponentBoundEvent_Value2;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0138(0x0018)()
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0150(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor2;                    // 0x0160(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue2;                    // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue3;                    // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light) == 0x000008, "Wrong alignment on OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light");
static_assert(sizeof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light) == 0x000178, "Wrong size on OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, EntryPoint) == 0x000000, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, CallFunc_GetValue_ReturnValue) == 0x000004, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, CallFunc_MakeLiteralName_ReturnValue) == 0x000008, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, K2Node_Event_MouseEvent2) == 0x000018, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::K2Node_Event_MouseEvent2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, K2Node_Event_MyGeometry) == 0x000088, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, K2Node_Event_MouseEvent) == 0x0000C0, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, K2Node_ComponentBoundEvent_Value2) == 0x000130, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::K2Node_ComponentBoundEvent_Value2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, K2Node_ComponentBoundEvent_Value) == 0x000134, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, CallFunc_Conv_FloatToText_ReturnValue) == 0x000138, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, K2Node_MakeStruct_LinearColor) == 0x000150, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, K2Node_MakeStruct_LinearColor2) == 0x000160, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::K2Node_MakeStruct_LinearColor2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, CallFunc_GetValue_ReturnValue2) == 0x000170, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::CallFunc_GetValue_ReturnValue2' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light, CallFunc_GetValue_ReturnValue3) == 0x000174, "Member 'OptionsMenuSlider_Light_C_ExecuteUbergraph_OptionsMenuSlider_Light::CallFunc_GetValue_ReturnValue3' has a wrong offset!");

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'OptionsMenuSlider_Light_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct OptionsMenuSlider_Light_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuSlider_Light_C_OnMouseEnter) == 0x000008, "Wrong alignment on OptionsMenuSlider_Light_C_OnMouseEnter");
static_assert(sizeof(OptionsMenuSlider_Light_C_OnMouseEnter) == 0x0000A8, "Wrong size on OptionsMenuSlider_Light_C_OnMouseEnter");
static_assert(offsetof(OptionsMenuSlider_Light_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'OptionsMenuSlider_Light_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'OptionsMenuSlider_Light_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct OptionsMenuSlider_Light_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(OptionsMenuSlider_Light_C_OnMouseLeave) == 0x000008, "Wrong alignment on OptionsMenuSlider_Light_C_OnMouseLeave");
static_assert(sizeof(OptionsMenuSlider_Light_C_OnMouseLeave) == 0x000070, "Wrong size on OptionsMenuSlider_Light_C_OnMouseLeave");
static_assert(offsetof(OptionsMenuSlider_Light_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'OptionsMenuSlider_Light_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Update Slider
// 0x0060 (0x0060 - 0x0000)
struct OptionsMenuSlider_Light_C_Update_Slider final
{
public:
	class FText                                   Slider_Text;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         Slider_Value;                                      // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Param_Hover_Text;                                  // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                       Tooltip_Text_Block;                                // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0048(0x0018)()
};
static_assert(alignof(OptionsMenuSlider_Light_C_Update_Slider) == 0x000008, "Wrong alignment on OptionsMenuSlider_Light_C_Update_Slider");
static_assert(sizeof(OptionsMenuSlider_Light_C_Update_Slider) == 0x000060, "Wrong size on OptionsMenuSlider_Light_C_Update_Slider");
static_assert(offsetof(OptionsMenuSlider_Light_C_Update_Slider, Slider_Text) == 0x000000, "Member 'OptionsMenuSlider_Light_C_Update_Slider::Slider_Text' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_Update_Slider, Slider_Value) == 0x000018, "Member 'OptionsMenuSlider_Light_C_Update_Slider::Slider_Value' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_Update_Slider, Param_Hover_Text) == 0x000020, "Member 'OptionsMenuSlider_Light_C_Update_Slider::Param_Hover_Text' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_Update_Slider, Tooltip_Text_Block) == 0x000038, "Member 'OptionsMenuSlider_Light_C_Update_Slider::Tooltip_Text_Block' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_Update_Slider, CallFunc_MakeLiteralName_ReturnValue) == 0x000040, "Member 'OptionsMenuSlider_Light_C_Update_Slider::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionsMenuSlider_Light_C_Update_Slider, CallFunc_Conv_FloatToText_ReturnValue) == 0x000048, "Member 'OptionsMenuSlider_Light_C_Update_Slider::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function OptionsMenuSlider_Light.OptionsMenuSlider_Light_C.Center on Widget
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuSlider_Light_C_Center_on_Widget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsMenuSlider_Light_C_Center_on_Widget) == 0x000008, "Wrong alignment on OptionsMenuSlider_Light_C_Center_on_Widget");
static_assert(sizeof(OptionsMenuSlider_Light_C_Center_on_Widget) == 0x000008, "Wrong size on OptionsMenuSlider_Light_C_Center_on_Widget");
static_assert(offsetof(OptionsMenuSlider_Light_C_Center_on_Widget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'OptionsMenuSlider_Light_C_Center_on_Widget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

}

