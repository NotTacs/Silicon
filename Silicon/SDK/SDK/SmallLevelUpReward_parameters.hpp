#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmallLevelUpReward

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SmallLevelUpReward.SmallLevelUpReward_C.SetupReward
// 0x0078 (0x0078 - 0x0000)
struct SmallLevelUpReward_C_SetupReward final
{
public:
	bool                                          HasReward;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortItemInstanceQuantityPair          RewardItem;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         LevelRewarded;                                     // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x0038(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SmallLevelUpReward_C_SetupReward) == 0x000008, "Wrong alignment on SmallLevelUpReward_C_SetupReward");
static_assert(sizeof(SmallLevelUpReward_C_SetupReward) == 0x000078, "Wrong size on SmallLevelUpReward_C_SetupReward");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, HasReward) == 0x000000, "Member 'SmallLevelUpReward_C_SetupReward::HasReward' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, RewardItem) == 0x000008, "Member 'SmallLevelUpReward_C_SetupReward::RewardItem' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, LevelRewarded) == 0x000018, "Member 'SmallLevelUpReward_C_SetupReward::LevelRewarded' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, Temp_byte_Variable) == 0x00001C, "Member 'SmallLevelUpReward_C_SetupReward::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'SmallLevelUpReward_C_SetupReward::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x000038, "Member 'SmallLevelUpReward_C_SetupReward::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000060, "Member 'SmallLevelUpReward_C_SetupReward::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, K2Node_DynamicCast_AsTexture_2D) == 0x000068, "Member 'SmallLevelUpReward_C_SetupReward::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'SmallLevelUpReward_C_SetupReward::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, Temp_byte_Variable2) == 0x000071, "Member 'SmallLevelUpReward_C_SetupReward::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, Temp_bool_Variable) == 0x000072, "Member 'SmallLevelUpReward_C_SetupReward::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SmallLevelUpReward_C_SetupReward, K2Node_Select_Default) == 0x000073, "Member 'SmallLevelUpReward_C_SetupReward::K2Node_Select_Default' has a wrong offset!");

}

