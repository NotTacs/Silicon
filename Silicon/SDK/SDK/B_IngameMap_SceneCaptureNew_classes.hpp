#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_IngameMap_SceneCaptureNew

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C
// 0x0010 (0x0390 - 0x0380)
class AB_IngameMap_SceneCaptureNew_C final : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   PostProcessPlane;                                  // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_IngameMap_SceneCaptureNew_C">();
	}
	static class AB_IngameMap_SceneCaptureNew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_IngameMap_SceneCaptureNew_C>();
	}
};
static_assert(alignof(AB_IngameMap_SceneCaptureNew_C) == 0x000008, "Wrong alignment on AB_IngameMap_SceneCaptureNew_C");
static_assert(sizeof(AB_IngameMap_SceneCaptureNew_C) == 0x000390, "Wrong size on AB_IngameMap_SceneCaptureNew_C");
static_assert(offsetof(AB_IngameMap_SceneCaptureNew_C, UberGraphFrame) == 0x000380, "Member 'AB_IngameMap_SceneCaptureNew_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_IngameMap_SceneCaptureNew_C, PostProcessPlane) == 0x000388, "Member 'AB_IngameMap_SceneCaptureNew_C::PostProcessPlane' has a wrong offset!");

}

