#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PotentialResourceWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PotentialResourceWidget.PotentialResourceWidget_C
// 0x0048 (0x0258 - 0x0210)
class UPotentialResourceWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       TranslateAndFadeUp;                                // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextResourceCount;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextResourceCountShadow;                           // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              PotentialResource;                                 // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   FinishedShowing;                                   // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          WeakpointDamage;                                   // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_249[0x3];                                      // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeakpointFontSize;                                 // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NormalFontSize;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FinishedShowing__DelegateSignature();
	void ExecuteUbergraph_PotentialResourceWidget(int32 EntryPoint);
	void HandleTranslateAndFadeUpFinished();
	void Construct();
	void UpdateResourceCountText();
	void GetResourceCountAsText(class UFortItem* Resource, class FText* Result);
	void SetupFont();
	void ShowPotentialResource(class UFortItem* Param_PotentialResource, bool bWeakpointDamage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PotentialResourceWidget_C">();
	}
	static class UPotentialResourceWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPotentialResourceWidget_C>();
	}
};
static_assert(alignof(UPotentialResourceWidget_C) == 0x000008, "Wrong alignment on UPotentialResourceWidget_C");
static_assert(sizeof(UPotentialResourceWidget_C) == 0x000258, "Wrong size on UPotentialResourceWidget_C");
static_assert(offsetof(UPotentialResourceWidget_C, UberGraphFrame) == 0x000210, "Member 'UPotentialResourceWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, TranslateAndFadeUp) == 0x000218, "Member 'UPotentialResourceWidget_C::TranslateAndFadeUp' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, TextResourceCount) == 0x000220, "Member 'UPotentialResourceWidget_C::TextResourceCount' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, TextResourceCountShadow) == 0x000228, "Member 'UPotentialResourceWidget_C::TextResourceCountShadow' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, PotentialResource) == 0x000230, "Member 'UPotentialResourceWidget_C::PotentialResource' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, FinishedShowing) == 0x000238, "Member 'UPotentialResourceWidget_C::FinishedShowing' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, WeakpointDamage) == 0x000248, "Member 'UPotentialResourceWidget_C::WeakpointDamage' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, WeakpointFontSize) == 0x00024C, "Member 'UPotentialResourceWidget_C::WeakpointFontSize' has a wrong offset!");
static_assert(offsetof(UPotentialResourceWidget_C, NormalFontSize) == 0x000250, "Member 'UPotentialResourceWidget_C::NormalFontSize' has a wrong offset!");

}

