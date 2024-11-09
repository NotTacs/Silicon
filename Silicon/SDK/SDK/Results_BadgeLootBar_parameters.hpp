#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_BadgeLootBar

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.ExecuteUbergraph_Results_BadgeLootBar
// 0x0058 (0x0058 - 0x0000)
struct Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue2;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue3;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue4;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UResults_Badge_C*                       K2Node_CustomEvent_Badge;                          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetBadgePoints_Points;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue5;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue6;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue2;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar) == 0x000008, "Wrong alignment on Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar");
static_assert(sizeof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar) == 0x000058, "Wrong size on Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, EntryPoint) == 0x000000, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_BooleanOR_ReturnValue) == 0x000010, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_BooleanOR_ReturnValue2) == 0x000011, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_BooleanOR_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_BooleanOR_ReturnValue3) == 0x000012, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_BooleanOR_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_BooleanOR_ReturnValue4) == 0x000013, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_BooleanOR_ReturnValue4' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, K2Node_CustomEvent_Badge) == 0x000018, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::K2Node_CustomEvent_Badge' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_GetBadgePoints_Points) == 0x000030, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_GetBadgePoints_Points' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000040, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_BooleanOR_ReturnValue5) == 0x000048, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_BooleanOR_ReturnValue5' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_BooleanOR_ReturnValue6) == 0x000049, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_BooleanOR_ReturnValue6' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_GetGameTimeInSeconds_ReturnValue2) == 0x00004C, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_GetGameTimeInSeconds_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar, CallFunc_SpawnSound2D_ReturnValue) == 0x000050, "Member 'Results_BadgeLootBar_C_ExecuteUbergraph_Results_BadgeLootBar::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Add Badge Points Sequence
// 0x0008 (0x0008 - 0x0000)
struct Results_BadgeLootBar_C_Add_Badge_Points_Sequence final
{
public:
	class UResults_Badge_C*                       Badge;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_BadgeLootBar_C_Add_Badge_Points_Sequence) == 0x000008, "Wrong alignment on Results_BadgeLootBar_C_Add_Badge_Points_Sequence");
static_assert(sizeof(Results_BadgeLootBar_C_Add_Badge_Points_Sequence) == 0x000008, "Wrong size on Results_BadgeLootBar_C_Add_Badge_Points_Sequence");
static_assert(offsetof(Results_BadgeLootBar_C_Add_Badge_Points_Sequence, Badge) == 0x000000, "Member 'Results_BadgeLootBar_C_Add_Badge_Points_Sequence::Badge' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.UpdateAddBadgePoints
// 0x0050 (0x0050 - 0x0000)
struct Results_BadgeLootBar_C_UpdateAddBadgePoints final
{
public:
	float                                         CurrentPointsFloat;                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimePassed;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetFillPercentage;                              // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNextLootLevelPoints_NextLootLevelPoints; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue2;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue3;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpEaseInOut_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue2;           // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_BadgeLootBar_C_UpdateAddBadgePoints) == 0x000004, "Wrong alignment on Results_BadgeLootBar_C_UpdateAddBadgePoints");
static_assert(sizeof(Results_BadgeLootBar_C_UpdateAddBadgePoints) == 0x000050, "Wrong size on Results_BadgeLootBar_C_UpdateAddBadgePoints");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CurrentPointsFloat) == 0x000000, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CurrentPointsFloat' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, TimePassed) == 0x000004, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::TimePassed' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, TargetFillPercentage) == 0x000008, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::TargetFillPercentage' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00000C, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_GetNextLootLevelPoints_NextLootLevelPoints) == 0x000010, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_GetNextLootLevelPoints_NextLootLevelPoints' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Min_ReturnValue) == 0x000014, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Conv_IntToFloat_ReturnValue2) == 0x000018, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Conv_IntToFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Divide_IntInt_ReturnValue) == 0x000020, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Conv_IntToFloat_ReturnValue3) == 0x000024, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Conv_IntToFloat_ReturnValue3' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002C, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000030, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_FMin_ReturnValue) == 0x000034, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000038, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_FInterpEaseInOut_ReturnValue) == 0x00003C, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_FInterpEaseInOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000040, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000044, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_Divide_FloatFloat_ReturnValue2) == 0x000048, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_Divide_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_UpdateAddBadgePoints, CallFunc_FTrunc_ReturnValue) == 0x00004C, "Member 'Results_BadgeLootBar_C_UpdateAddBadgePoints::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.Initialize
// 0x000C (0x000C - 0x0000)
struct Results_BadgeLootBar_C_Initialize final
{
public:
	float                                         Param_PlayRate;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue2;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_BadgeLootBar_C_Initialize) == 0x000004, "Wrong alignment on Results_BadgeLootBar_C_Initialize");
static_assert(sizeof(Results_BadgeLootBar_C_Initialize) == 0x00000C, "Wrong size on Results_BadgeLootBar_C_Initialize");
static_assert(offsetof(Results_BadgeLootBar_C_Initialize, Param_PlayRate) == 0x000000, "Member 'Results_BadgeLootBar_C_Initialize::Param_PlayRate' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_Initialize, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'Results_BadgeLootBar_C_Initialize::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_Initialize, CallFunc_Divide_FloatFloat_ReturnValue2) == 0x000008, "Member 'Results_BadgeLootBar_C_Initialize::CallFunc_Divide_FloatFloat_ReturnValue2' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetLootLevel
// 0x0078 (0x0078 - 0x0000)
struct Results_BadgeLootBar_C_SetLootLevel final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             PackageImage;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0060(0x0018)()
};
static_assert(alignof(Results_BadgeLootBar_C_SetLootLevel) == 0x000008, "Wrong alignment on Results_BadgeLootBar_C_SetLootLevel");
static_assert(sizeof(Results_BadgeLootBar_C_SetLootLevel) == 0x000078, "Wrong size on Results_BadgeLootBar_C_SetLootLevel");
static_assert(offsetof(Results_BadgeLootBar_C_SetLootLevel, Level) == 0x000000, "Member 'Results_BadgeLootBar_C_SetLootLevel::Level' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetLootLevel, PackageImage) == 0x000008, "Member 'Results_BadgeLootBar_C_SetLootLevel::PackageImage' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetLootLevel, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'Results_BadgeLootBar_C_SetLootLevel::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetLootLevel, K2Node_MakeArray_Array) == 0x000050, "Member 'Results_BadgeLootBar_C_SetLootLevel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetLootLevel, CallFunc_Format_ReturnValue) == 0x000060, "Member 'Results_BadgeLootBar_C_SetLootLevel::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetBadgePoints
// 0x0028 (0x0028 - 0x0000)
struct Results_BadgeLootBar_C_GetBadgePoints final
{
public:
	class UResults_Badge_C*                       Badge;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Points;                                            // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortBadgeItemDefinition*               K2Node_DynamicCast_AsFort_Badge_Item_Definition;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMissionPoints_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_BadgeLootBar_C_GetBadgePoints) == 0x000008, "Wrong alignment on Results_BadgeLootBar_C_GetBadgePoints");
static_assert(sizeof(Results_BadgeLootBar_C_GetBadgePoints) == 0x000028, "Wrong size on Results_BadgeLootBar_C_GetBadgePoints");
static_assert(offsetof(Results_BadgeLootBar_C_GetBadgePoints, Badge) == 0x000000, "Member 'Results_BadgeLootBar_C_GetBadgePoints::Badge' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetBadgePoints, Points) == 0x000008, "Member 'Results_BadgeLootBar_C_GetBadgePoints::Points' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetBadgePoints, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000010, "Member 'Results_BadgeLootBar_C_GetBadgePoints::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetBadgePoints, K2Node_DynamicCast_AsFort_Badge_Item_Definition) == 0x000018, "Member 'Results_BadgeLootBar_C_GetBadgePoints::K2Node_DynamicCast_AsFort_Badge_Item_Definition' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetBadgePoints, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Results_BadgeLootBar_C_GetBadgePoints::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetBadgePoints, CallFunc_GetMissionPoints_ReturnValue) == 0x000024, "Member 'Results_BadgeLootBar_C_GetBadgePoints::CallFunc_GetMissionPoints_ReturnValue' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.PlayAnimationCommon
// 0x0008 (0x0008 - 0x0000)
struct Results_BadgeLootBar_C_PlayAnimationCommon final
{
public:
	class UWidgetAnimation*                       Animation;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_BadgeLootBar_C_PlayAnimationCommon) == 0x000008, "Wrong alignment on Results_BadgeLootBar_C_PlayAnimationCommon");
static_assert(sizeof(Results_BadgeLootBar_C_PlayAnimationCommon) == 0x000008, "Wrong size on Results_BadgeLootBar_C_PlayAnimationCommon");
static_assert(offsetof(Results_BadgeLootBar_C_PlayAnimationCommon, Animation) == 0x000000, "Member 'Results_BadgeLootBar_C_PlayAnimationCommon::Animation' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.SetSkippingToEnd
// 0x0038 (0x0038 - 0x0000)
struct Results_BadgeLootBar_C_SetSkippingToEnd final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsTimerPausedHandle_ReturnValue;       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetAnimation*>               K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Results_BadgeLootBar_C_SetSkippingToEnd) == 0x000008, "Wrong alignment on Results_BadgeLootBar_C_SetSkippingToEnd");
static_assert(sizeof(Results_BadgeLootBar_C_SetSkippingToEnd) == 0x000038, "Wrong size on Results_BadgeLootBar_C_SetSkippingToEnd");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_K2_IsTimerPausedHandle_ReturnValue) == 0x00000C, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_K2_IsTimerPausedHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x00000D, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_BooleanOR_ReturnValue) == 0x00000E, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, K2Node_MakeArray_Array) == 0x000010, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_Array_Get_Item) == 0x000028, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_SetSkippingToEnd, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000031, "Member 'Results_BadgeLootBar_C_SetSkippingToEnd::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function Results_BadgeLootBar.Results_BadgeLootBar_C.GetNextLootLevelPoints
// 0x0014 (0x0014 - 0x0000)
struct Results_BadgeLootBar_C_GetNextLootLevelPoints final
{
public:
	int32                                         LootPoints;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextLootLevelPoints;                               // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Results_BadgeLootBar_C_GetNextLootLevelPoints) == 0x000004, "Wrong alignment on Results_BadgeLootBar_C_GetNextLootLevelPoints");
static_assert(sizeof(Results_BadgeLootBar_C_GetNextLootLevelPoints) == 0x000014, "Wrong size on Results_BadgeLootBar_C_GetNextLootLevelPoints");
static_assert(offsetof(Results_BadgeLootBar_C_GetNextLootLevelPoints, LootPoints) == 0x000000, "Member 'Results_BadgeLootBar_C_GetNextLootLevelPoints::LootPoints' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetNextLootLevelPoints, NextLootLevelPoints) == 0x000004, "Member 'Results_BadgeLootBar_C_GetNextLootLevelPoints::NextLootLevelPoints' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetNextLootLevelPoints, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Results_BadgeLootBar_C_GetNextLootLevelPoints::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetNextLootLevelPoints, CallFunc_Divide_IntInt_ReturnValue) == 0x00000C, "Member 'Results_BadgeLootBar_C_GetNextLootLevelPoints::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Results_BadgeLootBar_C_GetNextLootLevelPoints, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'Results_BadgeLootBar_C_GetNextLootLevelPoints::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}

