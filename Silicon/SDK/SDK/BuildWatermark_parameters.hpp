#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildWatermark

#include "Basic.hpp"


namespace SDK::Params
{

// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// 0x0004 (0x0004 - 0x0000)
struct BuildWatermark_C_ExecuteUbergraph_BuildWatermark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark) == 0x000004, "Wrong alignment on BuildWatermark_C_ExecuteUbergraph_BuildWatermark");
static_assert(sizeof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark) == 0x000004, "Wrong size on BuildWatermark_C_ExecuteUbergraph_BuildWatermark");
static_assert(offsetof(BuildWatermark_C_ExecuteUbergraph_BuildWatermark, EntryPoint) == 0x000000, "Member 'BuildWatermark_C_ExecuteUbergraph_BuildWatermark::EntryPoint' has a wrong offset!");

// Function BuildWatermark.BuildWatermark_C.Update Watermark
// 0x0038 (0x0038 - 0x0000)
struct BuildWatermark_C_Update_Watermark final
{
public:
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetWatermark_ReturnValue;                 // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuildWatermark_C_Update_Watermark) == 0x000008, "Wrong alignment on BuildWatermark_C_Update_Watermark");
static_assert(sizeof(BuildWatermark_C_Update_Watermark) == 0x000038, "Wrong size on BuildWatermark_C_Update_Watermark");
static_assert(offsetof(BuildWatermark_C_Update_Watermark, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'BuildWatermark_C_Update_Watermark::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_Update_Watermark, CallFunc_GetWatermark_ReturnValue) == 0x000008, "Member 'BuildWatermark_C_Update_Watermark::CallFunc_GetWatermark_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_Update_Watermark, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'BuildWatermark_C_Update_Watermark::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_Update_Watermark, CallFunc_Len_ReturnValue) == 0x000030, "Member 'BuildWatermark_C_Update_Watermark::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildWatermark_C_Update_Watermark, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'BuildWatermark_C_Update_Watermark::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

