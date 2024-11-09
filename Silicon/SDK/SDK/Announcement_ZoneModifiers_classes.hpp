#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_ZoneModifiers

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Announcement_ZoneModifiers.Announcement_ZoneModifiers_C
// 0x0018 (0x0230 - 0x0218)
class UAnnouncement_ZoneModifiers_C final : public UFortAnnouncementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(Transient, DuplicateTransient)
	class UMissionDetailsModifierList_C*          MissionDetailsModifierList;                        // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AFortClientAnnouncement_ZoneModifiers*  ZoneModifiersAnnouncement;                         // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announcement_ZoneModifiers(int32 EntryPoint);
	void OnConversationDelayFinished();
	void OnDisplayTimerFinished();
	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void WidgetCachingHack();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announcement_ZoneModifiers_C">();
	}
	static class UAnnouncement_ZoneModifiers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnnouncement_ZoneModifiers_C>();
	}
};
static_assert(alignof(UAnnouncement_ZoneModifiers_C) == 0x000008, "Wrong alignment on UAnnouncement_ZoneModifiers_C");
static_assert(sizeof(UAnnouncement_ZoneModifiers_C) == 0x000230, "Wrong size on UAnnouncement_ZoneModifiers_C");
static_assert(offsetof(UAnnouncement_ZoneModifiers_C, UberGraphFrame) == 0x000218, "Member 'UAnnouncement_ZoneModifiers_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnnouncement_ZoneModifiers_C, MissionDetailsModifierList) == 0x000220, "Member 'UAnnouncement_ZoneModifiers_C::MissionDetailsModifierList' has a wrong offset!");
static_assert(offsetof(UAnnouncement_ZoneModifiers_C, ZoneModifiersAnnouncement) == 0x000228, "Member 'UAnnouncement_ZoneModifiers_C::ZoneModifiersAnnouncement' has a wrong offset!");

}

