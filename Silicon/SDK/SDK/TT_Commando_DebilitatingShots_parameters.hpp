#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Commando_DebilitatingShots

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.InitializeAbilityInstanceInternal
// 0x0020 (0x0020 - 0x0000)
struct TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal final
{
public:
	class UGameplayAbility*                       AbilityInstance;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    Context;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_Commando_DebilitatingShots_C*       K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal) == 0x000008, "Wrong alignment on TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal");
static_assert(sizeof(TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal) == 0x000020, "Wrong size on TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal, AbilityInstance) == 0x000000, "Member 'TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal::AbilityInstance' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal, Context) == 0x000008, "Member 'TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal::Context' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal, K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots) == 0x000010, "Member 'TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal::K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'TT_Commando_DebilitatingShots_C_InitializeAbilityInstanceInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.GetTextForTokenFromAbilityInstanceInternal
// 0x0148 (0x0148 - 0x0000)
struct TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal final
{
public:
	class UGameplayAbility*                       AbilityInstance;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    Context;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Token;                                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FText                                   OutText;                                           // 0x0020(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGA_Commando_DebilitatingShots_C*       DibilitatingShots;                                 // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGA_Commando_DebilitatingShots_C*       K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0088(0x0018)()
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	class FText                                   Temp_text_Variable2;                               // 0x00E8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0130(0x0018)()
};
static_assert(alignof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal) == 0x000008, "Wrong alignment on TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal");
static_assert(sizeof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal) == 0x000148, "Wrong size on TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, AbilityInstance) == 0x000000, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::AbilityInstance' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, Tag) == 0x000008, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::Tag' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, Context) == 0x000010, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::Context' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, Token) == 0x000018, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::Token' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, OutText) == 0x000020, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::OutText' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, ReturnValue) == 0x000038, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, DibilitatingShots) == 0x000040, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::DibilitatingShots' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000048, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots) == 0x000050, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_DynamicCast_AsGA_Commando_Debilitating_Shots' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Abs_ReturnValue) == 0x00007C, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000080, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, Temp_text_Variable) == 0x000088, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_FTrunc_ReturnValue) == 0x0000A0, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, Temp_text_Variable2) == 0x0000E8, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::Temp_text_Variable2' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_MakeArray_Array) == 0x000100, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, CallFunc_Format_ReturnValue) == 0x000110, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, Temp_bool_Variable) == 0x000128, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal, K2Node_Select_Default) == 0x000130, "Member 'TT_Commando_DebilitatingShots_C_GetTextForTokenFromAbilityInstanceInternal::K2Node_Select_Default' has a wrong offset!");

// Function TT_Commando_DebilitatingShots.TT_Commando_DebilitatingShots_C.BP_GetTokenizedDescriptionText
// 0x0040 (0x0040 - 0x0000)
struct TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText final
{
public:
	class UObject*                                ObjectToDescribe;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    Context;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           OutDescription;                                    // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText) == 0x000008, "Wrong alignment on TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText");
static_assert(sizeof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText) == 0x000040, "Wrong size on TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText, ObjectToDescribe) == 0x000000, "Member 'TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText::ObjectToDescribe' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText, Tag) == 0x000008, "Member 'TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText::Tag' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText, Context) == 0x000010, "Member 'TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText::Context' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText, OutDescription) == 0x000018, "Member 'TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText::OutDescription' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText, ReturnValue) == 0x000028, "Member 'TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText::ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText, K2Node_MakeArray_Array) == 0x000030, "Member 'TT_Commando_DebilitatingShots_C_BP_GetTokenizedDescriptionText::K2Node_MakeArray_Array' has a wrong offset!");

}

