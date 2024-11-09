#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_Camera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WM_Camera.WM_Camera_C.ExecuteUbergraph_WM_Camera
// 0x0440 (0x0440 - 0x0000)
struct WM_Camera_C_ExecuteUbergraph_WM_Camera final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0004(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0010(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x001C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0038(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0xC];                                       // 0x0044(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_TLerp_ReturnValue;                        // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location2;                 // 0x00B0(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation2;                 // 0x00BC(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale2;                    // 0x00C8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X2;                           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y2;                           // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z2;                           // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue2;         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue2;                  // 0x00E4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue2;               // 0x00F0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location3;                 // 0x0120(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation3;                 // 0x012C(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale3;                    // 0x0138(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0xC];                                      // 0x0144(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_TLerp_ReturnValue2;                       // 0x0150(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X3;                           // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y3;                           // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z3;                           // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18C[0x4];                                      // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0190(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue2;              // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue3;                  // 0x0218(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0224(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue3;               // 0x0230(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorRelativeTransform_SweepHitResult; // 0x0260(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetActorRelativeTransform_SweepHitResult2; // 0x02E0(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortTimeOfDayManager*                  CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0368(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x03F0(0x0010)(ZeroConstructor, ReferenceParm)
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;                           // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AWM_Lights_C*>                   CallFunc_GetAllActorsOfClass_OutActors2;           // 0x0410(0x0010)(ZeroConstructor, ReferenceParm)
	class AWM_Lights_C*                           CallFunc_Array_Get_Item2;                          // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AWM_Lights_C*>                   CallFunc_GetAllActorsOfClass_OutActors3;           // 0x0428(0x0010)(ZeroConstructor, ReferenceParm)
	class AWM_Lights_C*                           CallFunc_Array_Get_Item3;                          // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WM_Camera_C_ExecuteUbergraph_WM_Camera) == 0x000010, "Wrong alignment on WM_Camera_C_ExecuteUbergraph_WM_Camera");
static_assert(sizeof(WM_Camera_C_ExecuteUbergraph_WM_Camera) == 0x000440, "Wrong size on WM_Camera_C_ExecuteUbergraph_WM_Camera");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, EntryPoint) == 0x000000, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::EntryPoint' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Location) == 0x000004, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Rotation) == 0x000010, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Scale) == 0x00001C, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_X) == 0x000028, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_Y) == 0x00002C, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_Z) == 0x000030, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000034, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_MakeVector_ReturnValue) == 0x000038, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_TLerp_ReturnValue) == 0x000080, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_TLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Location2) == 0x0000B0, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Location2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Rotation2) == 0x0000BC, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Rotation2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Scale2) == 0x0000C8, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Scale2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_X2) == 0x0000D4, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_X2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_Y2) == 0x0000D8, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_Y2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_Z2) == 0x0000DC, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_Z2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_Subtract_FloatFloat_ReturnValue2) == 0x0000E0, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_Subtract_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_MakeVector_ReturnValue2) == 0x0000E4, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_MakeVector_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_MakeTransform_ReturnValue2) == 0x0000F0, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_MakeTransform_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Location3) == 0x000120, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Location3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Rotation3) == 0x00012C, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Rotation3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakTransform_Scale3) == 0x000138, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakTransform_Scale3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_TLerp_ReturnValue2) == 0x000150, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_TLerp_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_X3) == 0x000180, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_X3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_Y3) == 0x000184, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_Y3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_BreakVector_Z3) == 0x000188, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_BreakVector_Z3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000190, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_Add_FloatFloat_ReturnValue) == 0x000210, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_Add_FloatFloat_ReturnValue2) == 0x000214, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_Add_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_MakeVector_ReturnValue3) == 0x000218, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_MakeVector_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_VLerp_ReturnValue) == 0x000224, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_MakeTransform_ReturnValue3) == 0x000230, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_MakeTransform_ReturnValue3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_K2_SetActorRelativeTransform_SweepHitResult) == 0x000260, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_K2_SetActorRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_K2_SetActorRelativeTransform_SweepHitResult2) == 0x0002E0, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_K2_SetActorRelativeTransform_SweepHitResult2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_GetTimeOfDayManagerFromContext_ReturnValue) == 0x000360, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_GetTimeOfDayManagerFromContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000368, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0003E8, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_GetAllActorsOfClass_OutActors) == 0x0003F0, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_Array_Get_Item) == 0x000400, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_GetPlayerController_ReturnValue) == 0x000408, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_GetAllActorsOfClass_OutActors2) == 0x000410, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_GetAllActorsOfClass_OutActors2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_Array_Get_Item2) == 0x000420, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_Array_Get_Item2' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_GetAllActorsOfClass_OutActors3) == 0x000428, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_GetAllActorsOfClass_OutActors3' has a wrong offset!");
static_assert(offsetof(WM_Camera_C_ExecuteUbergraph_WM_Camera, CallFunc_Array_Get_Item3) == 0x000438, "Member 'WM_Camera_C_ExecuteUbergraph_WM_Camera::CallFunc_Array_Get_Item3' has a wrong offset!");

// Function WM_Camera.WM_Camera_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct WM_Camera_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Camera_C_UserConstructionScript) == 0x000010, "Wrong alignment on WM_Camera_C_UserConstructionScript");
static_assert(sizeof(WM_Camera_C_UserConstructionScript) == 0x000030, "Wrong size on WM_Camera_C_UserConstructionScript");
static_assert(offsetof(WM_Camera_C_UserConstructionScript, CallFunc_GetTransform_ReturnValue) == 0x000000, "Member 'WM_Camera_C_UserConstructionScript::CallFunc_GetTransform_ReturnValue' has a wrong offset!");

}

