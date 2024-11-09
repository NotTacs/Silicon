#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_DisableSteering

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotifyState_DisableSteering.AnimNotifyState_DisableSteering_C.Received_NotifyBegin
// 0x0048 (0x0048 - 0x0000)
struct AnimNotifyState_DisableSteering_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AnimNotifyState_DisableSteering_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin) == 0x000048, "Wrong size on AnimNotifyState_DisableSteering_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, K2Node_DynamicCast_AsPawn) == 0x000020, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, K2Node_DynamicCast_AsPlayer_Controller) == 0x000038, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess2) == 0x000040, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

// Function AnimNotifyState_DisableSteering.AnimNotifyState_DisableSteering_C.Received_NotifyEnd
// 0x0048 (0x0048 - 0x0000)
struct AnimNotifyState_DisableSteering_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AnimNotifyState_DisableSteering_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd) == 0x000048, "Wrong size on AnimNotifyState_DisableSteering_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, K2Node_DynamicCast_AsPawn) == 0x000020, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, K2Node_DynamicCast_AsPlayer_Controller) == 0x000038, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_DisableSteering_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess2) == 0x000040, "Member 'AnimNotifyState_DisableSteering_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess2' has a wrong offset!");

}

