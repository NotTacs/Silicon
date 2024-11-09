#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTalkingList

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaTalkingList.AthenaTalkingList_C.ExecuteUbergraph_AthenaTalkingList
// 0x0030 (0x0030 - 0x0000)
struct AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList) == 0x000008, "Wrong alignment on AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList");
static_assert(sizeof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList) == 0x000030, "Wrong size on AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList");
static_assert(offsetof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList, EntryPoint) == 0x000000, "Member 'AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000020, "Member 'AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AthenaTalkingList_C_ExecuteUbergraph_AthenaTalkingList::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function AthenaTalkingList.AthenaTalkingList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaTalkingList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaTalkingList_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaTalkingList_C_PreConstruct");
static_assert(sizeof(AthenaTalkingList_C_PreConstruct) == 0x000001, "Wrong size on AthenaTalkingList_C_PreConstruct");
static_assert(offsetof(AthenaTalkingList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaTalkingList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaTalkingList.AthenaTalkingList_C.TalkingPlayersChanged
// 0x00A0 (0x00A0 - 0x0000)
struct AthenaTalkingList_C_TalkingPlayersChanged final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue2;           // 0x0030(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue3;           // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue4;           // 0x0060(0x0018)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue2;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue3;          // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue5;           // 0x0080(0x0018)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue4;          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue5;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaTalkingList_C_TalkingPlayersChanged) == 0x000008, "Wrong alignment on AthenaTalkingList_C_TalkingPlayersChanged");
static_assert(sizeof(AthenaTalkingList_C_TalkingPlayersChanged) == 0x0000A0, "Wrong size on AthenaTalkingList_C_TalkingPlayersChanged");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000008, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Conv_StringToText_ReturnValue2) == 0x000030, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Conv_StringToText_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Conv_StringToText_ReturnValue3) == 0x000048, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Conv_StringToText_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Conv_StringToText_ReturnValue4) == 0x000060, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Conv_StringToText_ReturnValue4' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000078, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Array_IsValidIndex_ReturnValue2) == 0x000079, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Array_IsValidIndex_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Array_IsValidIndex_ReturnValue3) == 0x00007A, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Array_IsValidIndex_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Conv_StringToText_ReturnValue5) == 0x000080, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Conv_StringToText_ReturnValue5' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Array_IsValidIndex_ReturnValue4) == 0x000098, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Array_IsValidIndex_ReturnValue4' has a wrong offset!");
static_assert(offsetof(AthenaTalkingList_C_TalkingPlayersChanged, CallFunc_Array_IsValidIndex_ReturnValue5) == 0x000099, "Member 'AthenaTalkingList_C_TalkingPlayersChanged::CallFunc_Array_IsValidIndex_ReturnValue5' has a wrong offset!");

}

