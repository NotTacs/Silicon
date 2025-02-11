#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOfferDetailsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C
// 0x0120 (0x0510 - 0x03F0)
class UAthenaDirectAcquisitionOfferDetailsWidget_C final : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          BorderDarkRarity;                                  // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderRarityColored;                               // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check;                                             // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlockOfferRemainingText;                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Currency1ItemImage2;                               // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Currency1VB;                                       // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventStoreHostPanels_C*                EventStoreHostPanels;                              // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ExclusiveBorder;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExclusiveDescriptionText;                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 ItemCard;                                          // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemCardBox;                                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LockedHB;                                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LockedText;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockImage;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MainContentBox;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NotUmbrellaIcon;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlaySalePrice1;                                 // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        OwnedSwitcher;                                     // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OwnedText;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseButton;                                    // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      QuantityToPurchaseLeft;                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      QuantityToPurchaseRight;                           // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBoxDetails;                                  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ShortDescription;                                  // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          SpacerBorder;                                      // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute;                   // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute_C_0;               // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextDescription;                                   // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferDisplayPrice1;                            // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOriginalPrice1;                                // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxOfferInfo;                                     // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CanPurchase;                                       // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPurchasing;                                      // 0x0501(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_502[0x2];                                      // 0x0502(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberToPurchase;                                  // 0x0504(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanPurchaseLeft;                                   // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanPurchaseRight;                                  // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanChangeQuantity;                                 // 0x050A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int32 EntryPoint);
	void PurchaseRight();
	void PurchaseLeft();
	void Show_Not_Enough_Currency();
	void BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnUpdateStatus();
	void Construct();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnOfferSet();
	void DialogResult_9E262B7A4CA17B2146A54B8A29CFC473(EFortDialogResult Result, class FName ResultName);
	void UpdateFromOffer();
	void HandleBack(bool* Passthrough);
	void PopDetails();
	void SetupPrice(class UIconTextButton_C* Param_PurchaseButton, class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage);
	void HandlePurchaseOfferComplete(bool Success);
	void AttemptPurchase();
	void Update_Locked_Information();
	void UpdateAvailability();
	void UpdatePurchaseQuantity();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionOfferDetailsWidget_C">();
	}
	static class UAthenaDirectAcquisitionOfferDetailsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionOfferDetailsWidget_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionOfferDetailsWidget_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitionOfferDetailsWidget_C");
static_assert(sizeof(UAthenaDirectAcquisitionOfferDetailsWidget_C) == 0x000510, "Wrong size on UAthenaDirectAcquisitionOfferDetailsWidget_C");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, UberGraphFrame) == 0x0003F0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, BorderDarkRarity) == 0x0003F8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::BorderDarkRarity' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, BorderRarityColored) == 0x000400, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::BorderRarityColored' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Check) == 0x000408, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Check' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CommonTextBlockOfferRemainingText) == 0x000410, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CommonTextBlockOfferRemainingText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Currency1ItemImage2) == 0x000418, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Currency1ItemImage2' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, Currency1VB) == 0x000420, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::Currency1VB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, EventStoreHostPanels) == 0x000428, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::EventStoreHostPanels' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ExclusiveBorder) == 0x000430, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ExclusiveBorder' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ExclusiveDescriptionText) == 0x000438, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ExclusiveDescriptionText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ItemCard) == 0x000440, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ItemCard' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ItemCardBox) == 0x000448, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ItemCardBox' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, LockedHB) == 0x000450, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::LockedHB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, LockedText) == 0x000458, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::LockedText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, LockImage) == 0x000460, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::LockImage' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, MainContentBox) == 0x000468, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::MainContentBox' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, NotUmbrellaIcon) == 0x000470, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::NotUmbrellaIcon' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, OverlaySalePrice1) == 0x000478, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::OverlaySalePrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, OwnedSwitcher) == 0x000480, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::OwnedSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, OwnedText) == 0x000488, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::OwnedText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, PurchaseButton) == 0x000490, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, QuantityToPurchaseLeft) == 0x000498, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::QuantityToPurchaseLeft' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, QuantityToPurchaseRight) == 0x0004A0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::QuantityToPurchaseRight' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ScrollBoxDetails) == 0x0004A8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ScrollBoxDetails' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, ShortDescription) == 0x0004B0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::ShortDescription' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, SizeBox_0) == 0x0004B8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, SpacerBorder) == 0x0004C0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::SpacerBorder' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, StoreMain_OfferDetailsAttribute) == 0x0004C8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::StoreMain_OfferDetailsAttribute' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, StoreMain_OfferDetailsAttribute_C_0) == 0x0004D0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::StoreMain_OfferDetailsAttribute_C_0' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, TextDescription) == 0x0004D8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, TextName) == 0x0004E0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::TextName' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, TextOfferDisplayPrice1) == 0x0004E8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::TextOfferDisplayPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, TextOriginalPrice1) == 0x0004F0, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::TextOriginalPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, VBoxOfferInfo) == 0x0004F8, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::VBoxOfferInfo' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanPurchase) == 0x000500, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, IsPurchasing) == 0x000501, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::IsPurchasing' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, NumberToPurchase) == 0x000504, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::NumberToPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanPurchaseLeft) == 0x000508, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanPurchaseLeft' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanPurchaseRight) == 0x000509, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanPurchaseRight' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionOfferDetailsWidget_C, CanChangeQuantity) == 0x00050A, "Member 'UAthenaDirectAcquisitionOfferDetailsWidget_C::CanChangeQuantity' has a wrong offset!");

}

