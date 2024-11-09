#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabTutorialBangWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C
// 0x00C0 (0x02E8 - 0x0228)
class UMainTabTutorialBangWrapper_C final : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       TutorialGlow;                                      // 0x0230(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BigBang;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BigBangCount;                                      // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_5;                                 // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CountText;                                         // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ModeSwitcher;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoCount;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SmallBang;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SmallBangCount;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TutorialBorder;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UseSmallVersion;                                   // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Count;                                             // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeature                                UIFeatureToReveal;                                 // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RevealFeatureStateText;                            // 0x02A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                   TabAdded;                                          // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   TabDialogClosed;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   StopTabCallout;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void TabAdded__DelegateSignature();
	void TabDialogClosed__DelegateSignature();
	void StopTabCallout__DelegateSignature();
	void ExecuteUbergraph_MainTabTutorialBangWrapper(int32 EntryPoint);
	void OnStopCallout();
	void OnStartCallout();
	void Tab_Reveal_Message_Closed();
	void PreConstruct(bool IsDesignTime);
	void OnBangStateChanged(bool bEnabled, int32 Param_Count);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void Update_Bang_Icon_Version(int32 InCount);
	void Adjust_Bang_Image_Translation(const struct FVector2D& Translation);
	void SetUIFeatureRevealData(EFortUIFeature UIFeature, const class FText& RevealText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainTabTutorialBangWrapper_C">();
	}
	static class UMainTabTutorialBangWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainTabTutorialBangWrapper_C>();
	}
};
static_assert(alignof(UMainTabTutorialBangWrapper_C) == 0x000008, "Wrong alignment on UMainTabTutorialBangWrapper_C");
static_assert(sizeof(UMainTabTutorialBangWrapper_C) == 0x0002E8, "Wrong size on UMainTabTutorialBangWrapper_C");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, UberGraphFrame) == 0x000228, "Member 'UMainTabTutorialBangWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, TutorialGlow) == 0x000230, "Member 'UMainTabTutorialBangWrapper_C::TutorialGlow' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, BigBang) == 0x000238, "Member 'UMainTabTutorialBangWrapper_C::BigBang' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, BigBangCount) == 0x000240, "Member 'UMainTabTutorialBangWrapper_C::BigBangCount' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, CommonTextBlock_0) == 0x000248, "Member 'UMainTabTutorialBangWrapper_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, CommonTextBlock_5) == 0x000250, "Member 'UMainTabTutorialBangWrapper_C::CommonTextBlock_5' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, Content) == 0x000258, "Member 'UMainTabTutorialBangWrapper_C::Content' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, CountText) == 0x000260, "Member 'UMainTabTutorialBangWrapper_C::CountText' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, ModeSwitcher) == 0x000268, "Member 'UMainTabTutorialBangWrapper_C::ModeSwitcher' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, NoCount) == 0x000270, "Member 'UMainTabTutorialBangWrapper_C::NoCount' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, SmallBang) == 0x000278, "Member 'UMainTabTutorialBangWrapper_C::SmallBang' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, SmallBangCount) == 0x000280, "Member 'UMainTabTutorialBangWrapper_C::SmallBangCount' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, TutorialBorder) == 0x000288, "Member 'UMainTabTutorialBangWrapper_C::TutorialBorder' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, UseSmallVersion) == 0x000290, "Member 'UMainTabTutorialBangWrapper_C::UseSmallVersion' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, Count) == 0x000294, "Member 'UMainTabTutorialBangWrapper_C::Count' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, UIFeatureToReveal) == 0x000298, "Member 'UMainTabTutorialBangWrapper_C::UIFeatureToReveal' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, RevealFeatureStateText) == 0x0002A0, "Member 'UMainTabTutorialBangWrapper_C::RevealFeatureStateText' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, TabAdded) == 0x0002B8, "Member 'UMainTabTutorialBangWrapper_C::TabAdded' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, TabDialogClosed) == 0x0002C8, "Member 'UMainTabTutorialBangWrapper_C::TabDialogClosed' has a wrong offset!");
static_assert(offsetof(UMainTabTutorialBangWrapper_C, StopTabCallout) == 0x0002D8, "Member 'UMainTabTutorialBangWrapper_C::StopTabCallout' has a wrong offset!");

}

