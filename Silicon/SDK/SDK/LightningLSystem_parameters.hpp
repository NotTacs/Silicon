#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightningLSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LightningLSystem.LightningLsystem_C.ExecuteUbergraph_LightningLsystem
// 0x01F0 (0x01F0 - 0x0000)
struct LightningLsystem_C_ExecuteUbergraph_LightningLsystem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Start_Location;                 // 0x0004(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_End_Location;                   // 0x0010(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0020(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0030(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;                 // 0x0040(0x000C)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0050(0x000C)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddLocalRotation_SweepHitResult;       // 0x0060(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue2;          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00EC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00FC(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue2;       // 0x0108(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0xC];                                      // 0x0114(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0120(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0150(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue2;           // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x01D8(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x01E8(0x0008)(NoDestructor)
};
static_assert(alignof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem) == 0x000010, "Wrong alignment on LightningLsystem_C_ExecuteUbergraph_LightningLsystem");
static_assert(sizeof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem) == 0x0001F0, "Wrong size on LightningLsystem_C_ExecuteUbergraph_LightningLsystem");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, EntryPoint) == 0x000000, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::EntryPoint' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, K2Node_CustomEvent_Start_Location) == 0x000004, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::K2Node_CustomEvent_Start_Location' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, K2Node_CustomEvent_End_Location) == 0x000010, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::K2Node_CustomEvent_End_Location' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000020, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_VSize_ReturnValue) == 0x00002C, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000030, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00003C, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_MakeRotFromZ_ReturnValue) == 0x000040, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_RandomFloatInRange_ReturnValue) == 0x00004C, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_MakeRotator_ReturnValue) == 0x000050, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_K2_AddLocalRotation_SweepHitResult) == 0x000060, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_K2_AddLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x0000E0, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_RandomFloatInRange_ReturnValue2) == 0x0000E4, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_RandomFloatInRange_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_Lerp_ReturnValue) == 0x0000E8, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_MakeVector_ReturnValue) == 0x0000EC, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000F8, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000FC, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_Subtract_VectorVector_ReturnValue2) == 0x000108, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_Subtract_VectorVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_MakeTransform_ReturnValue) == 0x000120, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000150, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_IsDedicatedServer_ReturnValue2) == 0x0001D0, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_IsDedicatedServer_ReturnValue2' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, K2Node_CreateDelegate_OutputDelegate) == 0x0001D8, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_ExecuteUbergraph_LightningLsystem, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0001E8, "Member 'LightningLsystem_C_ExecuteUbergraph_LightningLsystem::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function LightningLSystem.LightningLsystem_C.SetupLightning
// 0x0018 (0x0018 - 0x0000)
struct LightningLsystem_C_SetupLightning final
{
public:
	struct FVector                                Param_Start_Location;                              // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Param_End_Location;                                // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightningLsystem_C_SetupLightning) == 0x000004, "Wrong alignment on LightningLsystem_C_SetupLightning");
static_assert(sizeof(LightningLsystem_C_SetupLightning) == 0x000018, "Wrong size on LightningLsystem_C_SetupLightning");
static_assert(offsetof(LightningLsystem_C_SetupLightning, Param_Start_Location) == 0x000000, "Member 'LightningLsystem_C_SetupLightning::Param_Start_Location' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_SetupLightning, Param_End_Location) == 0x00000C, "Member 'LightningLsystem_C_SetupLightning::Param_End_Location' has a wrong offset!");

// Function LightningLSystem.LightningLsystem_C.UserConstructionScript
// 0x0048 (0x0048 - 0x0000)
struct LightningLsystem_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightningLsystem_C_UserConstructionScript) == 0x000008, "Wrong alignment on LightningLsystem_C_UserConstructionScript");
static_assert(sizeof(LightningLsystem_C_UserConstructionScript) == 0x000048, "Wrong size on LightningLsystem_C_UserConstructionScript");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'LightningLsystem_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000008, "Member 'LightningLsystem_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000010, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000029, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000030, "Member 'LightningLsystem_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000040, "Member 'LightningLsystem_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

// Function LightningLSystem.LightningLsystem_C.CleanupMesh
// 0x0001 (0x0001 - 0x0000)
struct LightningLsystem_C_CleanupMesh final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LightningLsystem_C_CleanupMesh) == 0x000001, "Wrong alignment on LightningLsystem_C_CleanupMesh");
static_assert(sizeof(LightningLsystem_C_CleanupMesh) == 0x000001, "Wrong size on LightningLsystem_C_CleanupMesh");
static_assert(offsetof(LightningLsystem_C_CleanupMesh, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'LightningLsystem_C_CleanupMesh::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LightningLSystem.LightningLsystem_C.GetRandomMesh
// 0x0020 (0x0020 - 0x0000)
struct LightningLsystem_C_GetRandomMesh final
{
public:
	int32                                         RandomMeshToUse;                                   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item2;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightningLsystem_C_GetRandomMesh) == 0x000008, "Wrong alignment on LightningLsystem_C_GetRandomMesh");
static_assert(sizeof(LightningLsystem_C_GetRandomMesh) == 0x000020, "Wrong size on LightningLsystem_C_GetRandomMesh");
static_assert(offsetof(LightningLsystem_C_GetRandomMesh, RandomMeshToUse) == 0x000000, "Member 'LightningLsystem_C_GetRandomMesh::RandomMeshToUse' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_GetRandomMesh, CallFunc_Array_Get_Item) == 0x000008, "Member 'LightningLsystem_C_GetRandomMesh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_GetRandomMesh, CallFunc_Array_Get_Item2) == 0x000010, "Member 'LightningLsystem_C_GetRandomMesh::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_GetRandomMesh, CallFunc_Array_LastIndex_ReturnValue) == 0x000018, "Member 'LightningLsystem_C_GetRandomMesh::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightningLsystem_C_GetRandomMesh, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00001C, "Member 'LightningLsystem_C_GetRandomMesh::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");

}

