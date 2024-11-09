#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultCharacterPlacementHelper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
// 0x01D0 (0x01D0 - 0x0000)
struct VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0008(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x008C(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0098(0x000C)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A4(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      K2Node_CustomEvent_SubGame;                        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               CallFunc_GetFrontEndCamera_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESubGame SubGame)>             K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue4;         // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00E8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;                   // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0100(0x000C)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0110(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult2;     // 0x0140(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue2;        // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper) == 0x000010, "Wrong alignment on VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper");
static_assert(sizeof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper) == 0x0001D0, "Wrong size on VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, EntryPoint) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000008, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000088, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_BreakTransform_Location) == 0x00008C, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_BreakTransform_Rotation) == 0x000098, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_BreakTransform_Scale) == 0x0000A4, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_CustomEvent_SubGame) == 0x0000B0, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_CustomEvent_SubGame' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetContext_ReturnValue) == 0x0000B8, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetFrontEndCamera_ReturnValue) == 0x0000C0, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetFrontEndCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D8, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_EqualEqual_ByteByte_ReturnValue2) == 0x0000D9, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_EqualEqual_ByteByte_ReturnValue2' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_EqualEqual_ByteByte_ReturnValue3) == 0x0000DA, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_EqualEqual_ByteByte_ReturnValue3' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_EqualEqual_ByteByte_ReturnValue4) == 0x0000DB, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_EqualEqual_ByteByte_ReturnValue4' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetContext_ReturnValue2) == 0x0000E0, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_Add_VectorVector_ReturnValue) == 0x0000E8, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_GetSubGame_ReturnValue) == 0x0000F4, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_Event_DeltaSeconds) == 0x0000F8, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, K2Node_SwitchEnum_CmpSuccess) == 0x0000FC, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_ComposeRotators_ReturnValue) == 0x000100, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_MakeTransform_ReturnValue) == 0x000110, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_K2_SetActorTransform_SweepHitResult2) == 0x000140, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_K2_SetActorTransform_SweepHitResult2' has a wrong offset!");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper, CallFunc_K2_SetActorTransform_ReturnValue2) == 0x0001C0, "Member 'VaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper::CallFunc_K2_SetActorTransform_ReturnValue2' has a wrong offset!");

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct VaultCharacterPlacementHelper_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultCharacterPlacementHelper_C_ReceiveTick) == 0x000004, "Wrong alignment on VaultCharacterPlacementHelper_C_ReceiveTick");
static_assert(sizeof(VaultCharacterPlacementHelper_C_ReceiveTick) == 0x000004, "Wrong size on VaultCharacterPlacementHelper_C_ReceiveTick");
static_assert(offsetof(VaultCharacterPlacementHelper_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event_0
// 0x0001 (0x0001 - 0x0000)
struct VaultCharacterPlacementHelper_C_SubGameChanged_Event_0 final
{
public:
	ESubGame                                      SubGame;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultCharacterPlacementHelper_C_SubGameChanged_Event_0) == 0x000001, "Wrong alignment on VaultCharacterPlacementHelper_C_SubGameChanged_Event_0");
static_assert(sizeof(VaultCharacterPlacementHelper_C_SubGameChanged_Event_0) == 0x000001, "Wrong size on VaultCharacterPlacementHelper_C_SubGameChanged_Event_0");
static_assert(offsetof(VaultCharacterPlacementHelper_C_SubGameChanged_Event_0, SubGame) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_SubGameChanged_Event_0::SubGame' has a wrong offset!");

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct VaultCharacterPlacementHelper_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultCharacterPlacementHelper_C_UserConstructionScript) == 0x000010, "Wrong alignment on VaultCharacterPlacementHelper_C_UserConstructionScript");
static_assert(sizeof(VaultCharacterPlacementHelper_C_UserConstructionScript) == 0x000030, "Wrong size on VaultCharacterPlacementHelper_C_UserConstructionScript");
static_assert(offsetof(VaultCharacterPlacementHelper_C_UserConstructionScript, CallFunc_GetTransform_ReturnValue) == 0x000000, "Member 'VaultCharacterPlacementHelper_C_UserConstructionScript::CallFunc_GetTransform_ReturnValue' has a wrong offset!");

}

