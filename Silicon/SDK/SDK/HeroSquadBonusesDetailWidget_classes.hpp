#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroSquadBonusesDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C
// 0x0018 (0x0270 - 0x0258)
class UHeroSquadBonusesDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UFortHeroSupportPerkWidget_C*           SupportPerkWidget;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortHeroSupportPerkWidget_C*           TacticalPerkWidget;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HeroSquadBonusesDetailWidget(int32 EntryPoint);
	void HandlePostDifferentItemToDetailSet();
	void UpdatePerkWidgets();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroSquadBonusesDetailWidget_C">();
	}
	static class UHeroSquadBonusesDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroSquadBonusesDetailWidget_C>();
	}
};
static_assert(alignof(UHeroSquadBonusesDetailWidget_C) == 0x000008, "Wrong alignment on UHeroSquadBonusesDetailWidget_C");
static_assert(sizeof(UHeroSquadBonusesDetailWidget_C) == 0x000270, "Wrong size on UHeroSquadBonusesDetailWidget_C");
static_assert(offsetof(UHeroSquadBonusesDetailWidget_C, UberGraphFrame) == 0x000258, "Member 'UHeroSquadBonusesDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonusesDetailWidget_C, SupportPerkWidget) == 0x000260, "Member 'UHeroSquadBonusesDetailWidget_C::SupportPerkWidget' has a wrong offset!");
static_assert(offsetof(UHeroSquadBonusesDetailWidget_C, TacticalPerkWidget) == 0x000268, "Member 'UHeroSquadBonusesDetailWidget_C::TacticalPerkWidget' has a wrong offset!");

}

