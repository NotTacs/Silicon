#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaderboardRowWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
// 0x0018 (0x0018 - 0x0000)
struct LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortLeaderboardRowProxyInstance*       K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget) == 0x000008, "Wrong alignment on LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget");
static_assert(sizeof(LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget) == 0x000018, "Wrong size on LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget");
static_assert(offsetof(LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget, EntryPoint) == 0x000000, "Member 'LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget, K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance) == 0x000008, "Member 'LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget::K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance' has a wrong offset!");
static_assert(offsetof(LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'LeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
// 0x0050 (0x0050 - 0x0000)
struct LeaderboardRowWidget_C_Refresh final
{
public:
	class UFortLeaderboardRowProxyInstance*       RowObject;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue2;              // 0x0038(0x0018)()
};
static_assert(alignof(LeaderboardRowWidget_C_Refresh) == 0x000008, "Wrong alignment on LeaderboardRowWidget_C_Refresh");
static_assert(sizeof(LeaderboardRowWidget_C_Refresh) == 0x000050, "Wrong size on LeaderboardRowWidget_C_Refresh");
static_assert(offsetof(LeaderboardRowWidget_C_Refresh, RowObject) == 0x000000, "Member 'LeaderboardRowWidget_C_Refresh::RowObject' has a wrong offset!");
static_assert(offsetof(LeaderboardRowWidget_C_Refresh, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'LeaderboardRowWidget_C_Refresh::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeaderboardRowWidget_C_Refresh, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'LeaderboardRowWidget_C_Refresh::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeaderboardRowWidget_C_Refresh, CallFunc_Conv_IntToText_ReturnValue2) == 0x000038, "Member 'LeaderboardRowWidget_C_Refresh::CallFunc_Conv_IntToText_ReturnValue2' has a wrong offset!");

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
// 0x0008 (0x0008 - 0x0000)
struct LeaderboardRowWidget_C_SetDataDirect final
{
public:
	class UFortLeaderboardRowProxyInstance*       NewData;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LeaderboardRowWidget_C_SetDataDirect) == 0x000008, "Wrong alignment on LeaderboardRowWidget_C_SetDataDirect");
static_assert(sizeof(LeaderboardRowWidget_C_SetDataDirect) == 0x000008, "Wrong size on LeaderboardRowWidget_C_SetDataDirect");
static_assert(offsetof(LeaderboardRowWidget_C_SetDataDirect, NewData) == 0x000000, "Member 'LeaderboardRowWidget_C_SetDataDirect::NewData' has a wrong offset!");

}

