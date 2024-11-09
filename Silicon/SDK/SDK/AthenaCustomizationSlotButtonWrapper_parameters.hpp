#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButtonWrapper

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature final
{
public:
	EAthenaCustomizationCategory                  Param_CustomizationType;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          Button;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   BannerLabel;                                       // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Subslot_Index;                                     // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature) == 0x000030, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature, Param_CustomizationType) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature::Param_CustomizationType' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature, Button) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature::Button' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature, BannerLabel) == 0x000010, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature::BannerLabel' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature, Subslot_Index) == 0x000028, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature::Subslot_Index' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotHovered__DelegateSignature
// 0x0040 (0x0040 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature final
{
public:
	EAthenaCustomizationCategory                  Param_CustomizationType;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   BannerLabel;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CustomizationDescription;                          // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_SubslotIndex;                                // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature) == 0x000040, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, Param_CustomizationType) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::Param_CustomizationType' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, BannerLabel) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::BannerLabel' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, CustomizationDescription) == 0x000020, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::CustomizationDescription' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature, Param_SubslotIndex) == 0x000038, "Member 'AthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature::Param_SubslotIndex' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper
// 0x0030 (0x0030 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button3;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShowSlotType_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button2;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper) == 0x000030, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, EntryPoint) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_bool_Variable) == 0x000004, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_byte_Variable) == 0x000005, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_byte_Variable2) == 0x000006, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_Event_IsDesignTime) == 0x000007, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button3) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button3' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_CanShowSlotType_ReturnValue) == 0x000010, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_CanShowSlotType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button2) == 0x000018, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_Select_Default) == 0x000020, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button) == 0x000028, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaCustomizationSlotButtonWrapper_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_PreConstruct");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_PreConstruct) == 0x000001, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_PreConstruct");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

