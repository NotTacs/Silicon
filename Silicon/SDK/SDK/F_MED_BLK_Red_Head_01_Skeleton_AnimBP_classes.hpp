#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_BLK_Red_Head_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_BLK_Red_Head_01_Skeleton_AnimBP.F_MED_BLK_Red_Head_01_Skeleton_AnimBP_C
// 0x0510 (0x0980 - 0x0470)
class UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_ADD84ECA4C179A894077EA926E4E8C27; // 0x0478(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030; // 0x04C0(0x0098)(ContainsInstancedReference)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_14C43EE54D79827F00DF1E9A8242ED73; // 0x0558(0x0068)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_26AEFC2749B6D18C132B8A9AFACB7107; // 0x05C0(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_B3EB7DD7487D3DA8C89669A6B3EE960E; // 0x06A0(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F; // 0x0780(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D; // 0x0850(0x0098)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9E42BD2C4D12D2F1E124EFBCD05D9810; // 0x08E8(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1E99F95C4ECF47136D41C482F786FD2C; // 0x0930(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0978(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_BLK_Red_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_BLK_Red_Head_01_Skeleton_AnimBP_C">();
	}
	static class UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C");
static_assert(sizeof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C) == 0x000980, "Wrong size on UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x000470, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Root_ADD84ECA4C179A894077EA926E4E8C27) == 0x000478, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Root_ADD84ECA4C179A894077EA926E4E8C27' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030) == 0x0004C0, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_D97E649D45B817241D9AEC8AFF8B1030' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Slot_14C43EE54D79827F00DF1E9A8242ED73) == 0x000558, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Slot_14C43EE54D79827F00DF1E9A8242ED73' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_26AEFC2749B6D18C132B8A9AFACB7107) == 0x0005C0, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_26AEFC2749B6D18C132B8A9AFACB7107' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_B3EB7DD7487D3DA8C89669A6B3EE960E) == 0x0006A0, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_B3EB7DD7487D3DA8C89669A6B3EE960E' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F) == 0x000780, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_CF536D774F38E2EEF45328867E530E1F' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D) == 0x000850, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_3C3D052A4A90851006AF169ADEDB9A0D' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LocalToComponentSpace_9E42BD2C4D12D2F1E124EFBCD05D9810) == 0x0008E8, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LocalToComponentSpace_9E42BD2C4D12D2F1E124EFBCD05D9810' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_1E99F95C4ECF47136D41C482F786FD2C) == 0x000930, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_1E99F95C4ECF47136D41C482F786FD2C' has a wrong offset!");
static_assert(offsetof(UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C, MeshToCopy) == 0x000978, "Member 'UF_MED_BLK_Red_Head_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}

