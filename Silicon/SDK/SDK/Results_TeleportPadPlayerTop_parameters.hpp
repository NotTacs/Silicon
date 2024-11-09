#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeleportPadPlayerTop

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
// 0x0070 (0x0070 - 0x0000)
struct Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue2;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue2;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
};
static_assert(alignof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop) == 0x000008, "Wrong alignment on Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop");
static_assert(sizeof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop) == 0x000070, "Wrong size on Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, EntryPoint) == 0x000000, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, K2Node_Event_IsDesignTime) == 0x000004, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_RandomInteger_ReturnValue) == 0x000008, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_MakeLiteralString_ReturnValue) == 0x000010, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_RandomInteger_ReturnValue2) == 0x000020, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_RandomInteger_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_Conv_IntToString_ReturnValue) == 0x000028, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_Concat_StrStr_ReturnValue2) == 0x000048, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_Concat_StrStr_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'Results_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct Results_TeleportPadPlayerTop_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Results_TeleportPadPlayerTop_C_PreConstruct) == 0x000001, "Wrong alignment on Results_TeleportPadPlayerTop_C_PreConstruct");
static_assert(sizeof(Results_TeleportPadPlayerTop_C_PreConstruct) == 0x000001, "Wrong size on Results_TeleportPadPlayerTop_C_PreConstruct");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Results_TeleportPadPlayerTop_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
// 0x0068 (0x0068 - 0x0000)
struct Results_TeleportPadPlayerTop_C_Initialize final
{
public:
	struct FUniqueNetIdRepl                       UniqueNetID;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UFortUIScoreReport*                     ScoreReport;                                       // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ScoreReportIndex;                                  // 0x0030(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetPlayerName_ReturnValue;                // 0x0040(0x0018)()
	int32                                         CallFunc_GetTotalHomebaseRating_Rating;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalHomebaseRating_ProgressFraction;  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTotalHomebaseRating_ReturnValue;       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_TeleportPadPlayerTop_C_Initialize) == 0x000008, "Wrong alignment on Results_TeleportPadPlayerTop_C_Initialize");
static_assert(sizeof(Results_TeleportPadPlayerTop_C_Initialize) == 0x000068, "Wrong size on Results_TeleportPadPlayerTop_C_Initialize");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, UniqueNetID) == 0x000000, "Member 'Results_TeleportPadPlayerTop_C_Initialize::UniqueNetID' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, ScoreReport) == 0x000028, "Member 'Results_TeleportPadPlayerTop_C_Initialize::ScoreReport' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, ScoreReportIndex) == 0x000030, "Member 'Results_TeleportPadPlayerTop_C_Initialize::ScoreReportIndex' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'Results_TeleportPadPlayerTop_C_Initialize::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, CallFunc_GetPlayerName_ReturnValue) == 0x000040, "Member 'Results_TeleportPadPlayerTop_C_Initialize::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, CallFunc_GetTotalHomebaseRating_Rating) == 0x000058, "Member 'Results_TeleportPadPlayerTop_C_Initialize::CallFunc_GetTotalHomebaseRating_Rating' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, CallFunc_GetTotalHomebaseRating_ProgressFraction) == 0x00005C, "Member 'Results_TeleportPadPlayerTop_C_Initialize::CallFunc_GetTotalHomebaseRating_ProgressFraction' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, CallFunc_GetTotalHomebaseRating_ReturnValue) == 0x000060, "Member 'Results_TeleportPadPlayerTop_C_Initialize::CallFunc_GetTotalHomebaseRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_TeleportPadPlayerTop_C_Initialize, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000064, "Member 'Results_TeleportPadPlayerTop_C_Initialize::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

}

