#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultSkillNode

#include "Basic.hpp"

#include "SkillTreeGroups_structs.hpp"
#include "Engine_structs.hpp"
#include "SkillTreepAGEColors_structs.hpp"
#include "SkillTreePages_structs.hpp"
#include "SkillTreeGroupColors_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
// 0x0150 (0x08F8 - 0x07A8)
class UDefaultSkillNode_C final : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07A8(0x0008)(Transient, DuplicateTransient)
	class USpacer*                                InternalSpacer;                                    // 0x07B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectionPulseEffect;                              // 0x07B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         SelectionGlowPercentage;                           // 0x07C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HoverGlowPercentage;                               // 0x07C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           HoverGlowTimerHandle;                              // 0x07C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                           SelectionGlowTimerHandle;                          // 0x07D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSkillTreePageColors                   PageColors;                                        // 0x07D8(0x00C0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	ESkillTreePages                               Pages;                                             // 0x0898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_899[0x3];                                      // 0x0899(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillTreeGroupColors                  GroupColors;                                       // 0x089C(0x0054)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	ESkillTreeGroups                              Groups;                                            // 0x08F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DefaultSkillNode(int32 EntryPoint);
	void OnDeselected();
	void OnSelected();
	void OnHovered();
	void OnUnhovered();
	void PreConstruct(bool IsDesignTime);
	void HandleSkillTreeNodeStateChanged();
	void Construct();
	void UpdateFromNodeState();
	void UpdateFromNodeData();
	void StepHoverGlowInterpolation();
	void StepSelectionGlowInterpolation();
	void UpdateHoverGlow();
	void UpdateSelectionGlow();
	void UpdateFromButtonState();
	void SetBackgroundColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultSkillNode_C">();
	}
	static class UDefaultSkillNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultSkillNode_C>();
	}
};
static_assert(alignof(UDefaultSkillNode_C) == 0x000008, "Wrong alignment on UDefaultSkillNode_C");
static_assert(sizeof(UDefaultSkillNode_C) == 0x0008F8, "Wrong size on UDefaultSkillNode_C");
static_assert(offsetof(UDefaultSkillNode_C, UberGraphFrame) == 0x0007A8, "Member 'UDefaultSkillNode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, InternalSpacer) == 0x0007B0, "Member 'UDefaultSkillNode_C::InternalSpacer' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, SelectionPulseEffect) == 0x0007B8, "Member 'UDefaultSkillNode_C::SelectionPulseEffect' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, SelectionGlowPercentage) == 0x0007C0, "Member 'UDefaultSkillNode_C::SelectionGlowPercentage' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, HoverGlowPercentage) == 0x0007C4, "Member 'UDefaultSkillNode_C::HoverGlowPercentage' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, HoverGlowTimerHandle) == 0x0007C8, "Member 'UDefaultSkillNode_C::HoverGlowTimerHandle' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, SelectionGlowTimerHandle) == 0x0007D0, "Member 'UDefaultSkillNode_C::SelectionGlowTimerHandle' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, PageColors) == 0x0007D8, "Member 'UDefaultSkillNode_C::PageColors' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, Pages) == 0x000898, "Member 'UDefaultSkillNode_C::Pages' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, GroupColors) == 0x00089C, "Member 'UDefaultSkillNode_C::GroupColors' has a wrong offset!");
static_assert(offsetof(UDefaultSkillNode_C, Groups) == 0x0008F0, "Member 'UDefaultSkillNode_C::Groups' has a wrong offset!");

}

