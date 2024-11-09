#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Athena_PurpleStuff

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.ExecuteUbergraph_GAT_Athena_PurpleStuff
// 0x0088 (0x0088 - 0x0000)
struct GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0008(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x0058(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0078(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff) == 0x000008, "Wrong alignment on GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff");
static_assert(sizeof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff) == 0x000088, "Wrong size on GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, EntryPoint) == 0x000000, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_K2_CommitAbility_ReturnValue) == 0x000004, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_GetActorInfo_ReturnValue) == 0x000008, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000048, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x000058, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000078, "Member 'GAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");

}

