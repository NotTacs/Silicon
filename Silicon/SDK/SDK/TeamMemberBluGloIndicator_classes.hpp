#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberBluGloIndicator

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TeamMemberBluGloIndicator.TeamMemberBluGloIndicator_C
// 0x0018 (0x0228 - 0x0210)
class UTeamMemberBluGloIndicator_C final : public UCommonUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                NumericTextBluGloCount;                            // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortPlayerStateZone*                   CurrentPlayer;                                     // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetPlayer(const struct FUniqueNetIdRepl& PlayerNetId);
	void OnPlayerAccumulatedItemsUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberBluGloIndicator_C">();
	}
	static class UTeamMemberBluGloIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberBluGloIndicator_C>();
	}
};
static_assert(alignof(UTeamMemberBluGloIndicator_C) == 0x000008, "Wrong alignment on UTeamMemberBluGloIndicator_C");
static_assert(sizeof(UTeamMemberBluGloIndicator_C) == 0x000228, "Wrong size on UTeamMemberBluGloIndicator_C");
static_assert(offsetof(UTeamMemberBluGloIndicator_C, Image_0) == 0x000210, "Member 'UTeamMemberBluGloIndicator_C::Image_0' has a wrong offset!");
static_assert(offsetof(UTeamMemberBluGloIndicator_C, NumericTextBluGloCount) == 0x000218, "Member 'UTeamMemberBluGloIndicator_C::NumericTextBluGloCount' has a wrong offset!");
static_assert(offsetof(UTeamMemberBluGloIndicator_C, CurrentPlayer) == 0x000220, "Member 'UTeamMemberBluGloIndicator_C::CurrentPlayer' has a wrong offset!");

}

