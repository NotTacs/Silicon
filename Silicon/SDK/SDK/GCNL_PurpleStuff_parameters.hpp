#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_PurpleStuff

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff
// 0x0014 (0x0014 - 0x0000)
struct GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetShield_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff) == 0x000004, "Wrong alignment on GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff");
static_assert(sizeof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff) == 0x000014, "Wrong size on GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, EntryPoint) == 0x000000, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_GetShield_ReturnValue) == 0x00000C, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_GetShield_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000010, "Member 'GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GCNL_PurpleStuff_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_PurpleStuff_C_ReceiveTick) == 0x000004, "Wrong alignment on GCNL_PurpleStuff_C_ReceiveTick");
static_assert(sizeof(GCNL_PurpleStuff_C_ReceiveTick) == 0x000004, "Wrong size on GCNL_PurpleStuff_C_ReceiveTick");
static_assert(offsetof(GCNL_PurpleStuff_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCNL_PurpleStuff_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive
// 0x00D8 (0x00D8 - 0x0000)
struct GCNL_PurpleStuff_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_Generic_C*           K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_PurpleStuff_C_OnActive) == 0x000008, "Wrong alignment on GCNL_PurpleStuff_C_OnActive");
static_assert(sizeof(GCNL_PurpleStuff_C_OnActive) == 0x0000D8, "Wrong size on GCNL_PurpleStuff_C_OnActive");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_PurpleStuff_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_PurpleStuff_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCNL_PurpleStuff_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic) == 0x0000C8, "Member 'GCNL_PurpleStuff_C_OnActive::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCNL_PurpleStuff_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GCNL_PurpleStuff_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_PurpleStuff_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_PurpleStuff_C_OnRemove");
static_assert(sizeof(GCNL_PurpleStuff_C_OnRemove) == 0x0000C8, "Wrong size on GCNL_PurpleStuff_C_OnRemove");
static_assert(offsetof(GCNL_PurpleStuff_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_PurpleStuff_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_PurpleStuff_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_PurpleStuff_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCNL_PurpleStuff_C_OnRemove::ReturnValue' has a wrong offset!");

}

