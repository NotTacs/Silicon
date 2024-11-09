#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolutionConfirmation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectEvolutionConfirmation.ItemInspectEvolutionConfirmation_C
// 0x00D0 (0x02E0 - 0x0210)
class UItemInspectEvolutionConfirmation_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      EvolutionConfirmButton;                            // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EvolutionInfo;                                     // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  EvolutionInfoSwitcher;                             // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInspectEvolutionIngredientsList_C* EvolutionIngredientsList;                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EvolutionNameText;                                 // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         EvolutionOptionsList;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EvolveRestrictionText;                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoEvolutionInfo;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoEvolutionIngredientsText;                        // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PromptText;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RestrictionBorder;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnEvolutionConfirm;                                // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortItem*                              Item;                                              // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EvolutionRecipeIndex;                              // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnEvolutionOptionHovered;                          // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnEvolutionOptionUnhovered;                        // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnEvolutionOptionSelected;                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          EvolutionSelected;                                 // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              EvolutionItemSelected;                             // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonGroup*                     EvoButtonGroup;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEvolutionConfirm__DelegateSignature();
	void OnEvolutionOptionHovered__DelegateSignature(class UFortItem* Param_Item);
	void OnEvolutionOptionUnhovered__DelegateSignature(class UFortItem* Param_Item);
	void OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Param_Item, int32 RecipeIndex);
	void ExecuteUbergraph_ItemInspectEvolutionConfirmation(int32 EntryPoint);
	void Construct();
	void BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetItemToRepresent(class UFortItem* Param_Item);
	void SetEvolutionToRepresent(int32 EvolutionIndex, class UFortItem* EvolutionItem);
	void HandleEvolutionOptionSelected(class UFortItem* Param_Item, int32 RecipeIndex);
	void SetupEvolutionOptions();
	void GetNumEvolutionOptions(int32* NumRecipes);
	void ShowEvolutionOptions();
	void HideEvolutionOptions();
	void OnShow();
	void ClearEvolutionRepresented();
	void SetEvolutionRestrictions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectEvolutionConfirmation_C">();
	}
	static class UItemInspectEvolutionConfirmation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectEvolutionConfirmation_C>();
	}
};
static_assert(alignof(UItemInspectEvolutionConfirmation_C) == 0x000008, "Wrong alignment on UItemInspectEvolutionConfirmation_C");
static_assert(sizeof(UItemInspectEvolutionConfirmation_C) == 0x0002E0, "Wrong size on UItemInspectEvolutionConfirmation_C");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, UberGraphFrame) == 0x000210, "Member 'UItemInspectEvolutionConfirmation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionConfirmButton) == 0x000218, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionConfirmButton' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionInfo) == 0x000220, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionInfo' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionInfoSwitcher) == 0x000228, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionInfoSwitcher' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionIngredientsList) == 0x000230, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionIngredientsList' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionNameText) == 0x000238, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionNameText' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionOptionsList) == 0x000240, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionOptionsList' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolveRestrictionText) == 0x000248, "Member 'UItemInspectEvolutionConfirmation_C::EvolveRestrictionText' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, Image_0) == 0x000250, "Member 'UItemInspectEvolutionConfirmation_C::Image_0' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, NoEvolutionInfo) == 0x000258, "Member 'UItemInspectEvolutionConfirmation_C::NoEvolutionInfo' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, NoEvolutionIngredientsText) == 0x000260, "Member 'UItemInspectEvolutionConfirmation_C::NoEvolutionIngredientsText' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, PromptText) == 0x000268, "Member 'UItemInspectEvolutionConfirmation_C::PromptText' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, RestrictionBorder) == 0x000270, "Member 'UItemInspectEvolutionConfirmation_C::RestrictionBorder' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, OnEvolutionConfirm) == 0x000278, "Member 'UItemInspectEvolutionConfirmation_C::OnEvolutionConfirm' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, Item) == 0x000288, "Member 'UItemInspectEvolutionConfirmation_C::Item' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionRecipeIndex) == 0x000290, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionRecipeIndex' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, OnEvolutionOptionHovered) == 0x000298, "Member 'UItemInspectEvolutionConfirmation_C::OnEvolutionOptionHovered' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, OnEvolutionOptionUnhovered) == 0x0002A8, "Member 'UItemInspectEvolutionConfirmation_C::OnEvolutionOptionUnhovered' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, OnEvolutionOptionSelected) == 0x0002B8, "Member 'UItemInspectEvolutionConfirmation_C::OnEvolutionOptionSelected' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionSelected) == 0x0002C8, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionSelected' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvolutionItemSelected) == 0x0002D0, "Member 'UItemInspectEvolutionConfirmation_C::EvolutionItemSelected' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolutionConfirmation_C, EvoButtonGroup) == 0x0002D8, "Member 'UItemInspectEvolutionConfirmation_C::EvoButtonGroup' has a wrong offset!");

}

