#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaveModifiersWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WaveModifiersWidget.WaveModifiersWidget_C
// 0x0038 (0x0250 - 0x0218)
class UWaveModifiersWidget_C final : public UFortUserWidget
{
public:
	class ULegacyBasicGradientFill_C*             BasicGradientFill;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ModifierVertBox;                                   // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWaveModifiersTile_C*>           ModifierWidgets;                                   // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         CurPresentedIdx;                                   // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnAllModifiersPresented;                           // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAllModifiersPresented__DelegateSignature();
	void OnModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*>& Modifiers, bool StartPresentationImmediately);
	void PresentNextModifier();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WaveModifiersWidget_C">();
	}
	static class UWaveModifiersWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaveModifiersWidget_C>();
	}
};
static_assert(alignof(UWaveModifiersWidget_C) == 0x000008, "Wrong alignment on UWaveModifiersWidget_C");
static_assert(sizeof(UWaveModifiersWidget_C) == 0x000250, "Wrong size on UWaveModifiersWidget_C");
static_assert(offsetof(UWaveModifiersWidget_C, BasicGradientFill) == 0x000218, "Member 'UWaveModifiersWidget_C::BasicGradientFill' has a wrong offset!");
static_assert(offsetof(UWaveModifiersWidget_C, ModifierVertBox) == 0x000220, "Member 'UWaveModifiersWidget_C::ModifierVertBox' has a wrong offset!");
static_assert(offsetof(UWaveModifiersWidget_C, ModifierWidgets) == 0x000228, "Member 'UWaveModifiersWidget_C::ModifierWidgets' has a wrong offset!");
static_assert(offsetof(UWaveModifiersWidget_C, CurPresentedIdx) == 0x000238, "Member 'UWaveModifiersWidget_C::CurPresentedIdx' has a wrong offset!");
static_assert(offsetof(UWaveModifiersWidget_C, OnAllModifiersPresented) == 0x000240, "Member 'UWaveModifiersWidget_C::OnAllModifiersPresented' has a wrong offset!");

}

