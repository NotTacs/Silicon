#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C
// 0x0070 (0x04B0 - 0x0440)
class UAthenaDirectAcquisitionScreen_C final : public UFortDirectAcquisitionWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)
	class UCommonDateTimeTextBlock*               DayCountdown;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxOffers;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LargeTileHB;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NoOffersBox;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayProgressSpinner;                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             SmallTileGP;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherItemsProgress;                             // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBOffers;                                          // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*               WeekCountdown;                                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            FirstOfferGenerated;                               // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                TilePadding;                                       // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitionScreen(int32 EntryPoint);
	void OnActivated();
	void OnOffersGenerated();
	void OnStartReadingOffers();
	void NoOffersAvailable();
	void GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* Param_OfferData);
	void Focus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionScreen_C">();
	}
	static class UAthenaDirectAcquisitionScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionScreen_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionScreen_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitionScreen_C");
static_assert(sizeof(UAthenaDirectAcquisitionScreen_C) == 0x0004B0, "Wrong size on UAthenaDirectAcquisitionScreen_C");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, UberGraphFrame) == 0x000440, "Member 'UAthenaDirectAcquisitionScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, DayCountdown) == 0x000448, "Member 'UAthenaDirectAcquisitionScreen_C::DayCountdown' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, HBoxOffers) == 0x000450, "Member 'UAthenaDirectAcquisitionScreen_C::HBoxOffers' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, LargeTileHB) == 0x000458, "Member 'UAthenaDirectAcquisitionScreen_C::LargeTileHB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, NoOffersBox) == 0x000460, "Member 'UAthenaDirectAcquisitionScreen_C::NoOffersBox' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, OverlayProgressSpinner) == 0x000468, "Member 'UAthenaDirectAcquisitionScreen_C::OverlayProgressSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, ProgressSpinner) == 0x000470, "Member 'UAthenaDirectAcquisitionScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, SmallTileGP) == 0x000478, "Member 'UAthenaDirectAcquisitionScreen_C::SmallTileGP' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, SwitcherItemsProgress) == 0x000480, "Member 'UAthenaDirectAcquisitionScreen_C::SwitcherItemsProgress' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, VBOffers) == 0x000488, "Member 'UAthenaDirectAcquisitionScreen_C::VBOffers' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, WeekCountdown) == 0x000490, "Member 'UAthenaDirectAcquisitionScreen_C::WeekCountdown' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, FirstOfferGenerated) == 0x000498, "Member 'UAthenaDirectAcquisitionScreen_C::FirstOfferGenerated' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionScreen_C, TilePadding) == 0x0004A0, "Member 'UAthenaDirectAcquisitionScreen_C::TilePadding' has a wrong offset!");

}

