#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestUpdatesLog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DynamicQuestUpdateInfo_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C
// 0x0090 (0x02C8 - 0x0238)
class UQuestUpdatesLog_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           QuestUpdatesBox;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortQuestItem*>                 PinnedQuests;                                      // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortQuestItem*                         RequiredQuest;                                     // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   PinnedQuestSingularText;                           // 0x0260(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PinnedQuestsPluralText;                            // 0x0278(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDynamicQuestUpdateInfo>        QueuedDynamicQuestStatusUpdates;                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         MaxDisplayedQuestUpdates;                          // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        QuestUpdateWidgets;                                // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                           TryDisplayNextUpdateTimerHandle;                   // 0x02B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         MaxDisplayedQuestObjectives;                       // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestUpdatesLog(int32 EntryPoint);
	void Construct();
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate);
	void CreateQuestUpdateWIdgets();
	void TryDisplayDynamicQuestStatusUpdate();
	void GetAvailableQuestUpdateWidget(const struct FDynamicQuestUpdateInfo& UpdateInfo, class UQuestUpdateEntry_C** AvailableWIdget);
	void HandleQuestUpdateWidgetFinished(class UQuestUpdateEntry_C* UpdateWidget);
	void CreateAnnouncementUpdate(const struct FDynamicQuestUpdateInfo& UpdateInfo);
	void GetTotalDisplayedObjectives(int32* NumObjectives);
	void CanDisplayAnotherObjective(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestUpdatesLog_C">();
	}
	static class UQuestUpdatesLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestUpdatesLog_C>();
	}
};
static_assert(alignof(UQuestUpdatesLog_C) == 0x000008, "Wrong alignment on UQuestUpdatesLog_C");
static_assert(sizeof(UQuestUpdatesLog_C) == 0x0002C8, "Wrong size on UQuestUpdatesLog_C");
static_assert(offsetof(UQuestUpdatesLog_C, UberGraphFrame) == 0x000238, "Member 'UQuestUpdatesLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, QuestUpdatesBox) == 0x000240, "Member 'UQuestUpdatesLog_C::QuestUpdatesBox' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, PinnedQuests) == 0x000248, "Member 'UQuestUpdatesLog_C::PinnedQuests' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, RequiredQuest) == 0x000258, "Member 'UQuestUpdatesLog_C::RequiredQuest' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, PinnedQuestSingularText) == 0x000260, "Member 'UQuestUpdatesLog_C::PinnedQuestSingularText' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, PinnedQuestsPluralText) == 0x000278, "Member 'UQuestUpdatesLog_C::PinnedQuestsPluralText' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, QueuedDynamicQuestStatusUpdates) == 0x000290, "Member 'UQuestUpdatesLog_C::QueuedDynamicQuestStatusUpdates' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, MaxDisplayedQuestUpdates) == 0x0002A0, "Member 'UQuestUpdatesLog_C::MaxDisplayedQuestUpdates' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, QuestUpdateWidgets) == 0x0002A8, "Member 'UQuestUpdatesLog_C::QuestUpdateWidgets' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, TryDisplayNextUpdateTimerHandle) == 0x0002B8, "Member 'UQuestUpdatesLog_C::TryDisplayNextUpdateTimerHandle' has a wrong offset!");
static_assert(offsetof(UQuestUpdatesLog_C, MaxDisplayedQuestObjectives) == 0x0002C0, "Member 'UQuestUpdatesLog_C::MaxDisplayedQuestObjectives' has a wrong offset!");

}

