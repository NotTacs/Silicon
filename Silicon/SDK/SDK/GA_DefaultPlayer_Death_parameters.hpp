#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Death

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death
// 0x0020 (0x0020 - 0x0000)
struct GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Generic_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Generic;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death) == 0x000008, "Wrong alignment on GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death");
static_assert(sizeof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death) == 0x000020, "Wrong size on GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death");
static_assert(offsetof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death, EntryPoint) == 0x000000, "Member 'GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death, K2Node_DynamicCast_AsPlayer_Pawn_Generic) == 0x000010, "Member 'GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death::K2Node_DynamicCast_AsPlayer_Pawn_Generic' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

