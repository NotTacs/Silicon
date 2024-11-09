#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_InteractSearch

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.ExecuteUbergraph_GA_DefaultPlayer_InteractSearch
// 0x00E8 (0x00E8 - 0x0000)
struct GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData3;                    // 0x0008(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag3;                // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData2;                    // 0x0040(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag2;                // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0078(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate3;             // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable2;                             // 0x00B8(0x0020)()
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch) == 0x000008, "Wrong alignment on GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch");
static_assert(sizeof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch) == 0x0000E8, "Wrong size on GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, EntryPoint) == 0x000000, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CustomEvent_TargetData3) == 0x000008, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CustomEvent_TargetData3' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CustomEvent_ApplicationTag3) == 0x000028, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CustomEvent_ApplicationTag3' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CustomEvent_TargetData2) == 0x000040, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CustomEvent_TargetData2' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CustomEvent_ApplicationTag2) == 0x000060, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CustomEvent_ApplicationTag2' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CreateDelegate_OutputDelegate2) == 0x000068, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CustomEvent_TargetData) == 0x000078, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CustomEvent_ApplicationTag) == 0x000098, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, K2Node_CreateDelegate_OutputDelegate3) == 0x0000A0, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, Temp_struct_Variable) == 0x0000B0, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, Temp_struct_Variable2) == 0x0000B8, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::Temp_struct_Variable2' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0000D8, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'GA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3
// 0x0028 (0x0028 - 0x0000)
struct GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3) == 0x000008, "Wrong alignment on GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3");
static_assert(sizeof(GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3) == 0x000028, "Wrong size on GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3, TargetData) == 0x000000, "Member 'GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3::TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3, ApplicationTag) == 0x000020, "Member 'GA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3::ApplicationTag' has a wrong offset!");

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_B697D9B445CA2BFDB1328D93C33FBCF3
// 0x0028 (0x0028 - 0x0000)
struct GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3) == 0x000008, "Wrong alignment on GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3");
static_assert(sizeof(GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3) == 0x000028, "Wrong size on GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3, TargetData) == 0x000000, "Member 'GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3::TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3, ApplicationTag) == 0x000020, "Member 'GA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3::ApplicationTag' has a wrong offset!");

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_B697D9B445CA2BFDB1328D93C33FBCF3
// 0x0028 (0x0028 - 0x0000)
struct GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3) == 0x000008, "Wrong alignment on GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3");
static_assert(sizeof(GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3) == 0x000028, "Wrong size on GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3, TargetData) == 0x000000, "Member 'GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3::TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3, ApplicationTag) == 0x000020, "Member 'GA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3::ApplicationTag' has a wrong offset!");

}

