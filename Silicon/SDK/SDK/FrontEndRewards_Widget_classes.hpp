#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEndRewards_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FrontEndRewards_Widget.FrontEndRewards_Widget_C
// 0x0150 (0x06C0 - 0x0570)
class UFrontEndRewards_Widget_C final : public UFortRewardNotificationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimShowBorder;                                    // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimFadeHeader;                                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimShowHeader;                                    // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonPrimaryAction;                               // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_ChoiceRewards_C*       ChoiceRewards;                                     // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Conversation_VO_C*     ConversationWidget;                                // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_CurrentReward_C*       CurrentRewardIcon;                                 // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Expedition_C*          ExpeditionRewards;                                 // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputReflector_C*                      InputReflector;                                    // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_ListRewards_C*         ListRewards;                                       // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_EpicQuest_C*           NewQuest;                                          // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewards_Header_C*                      RewardHeader;                                      // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFrontEndRewards_Queue_C*               RewardsQueue;                                      // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  RewardSwitcher;                                    // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatingStarburstWidget_C*             RotatingStarburst;                                 // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_4;                                        // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_5;                                        // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_6;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxBottom;                                     // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxTop;                                        // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextStorage;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRewardNotificationSubWidget*       CurrentSubWidget;                                  // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsIntroComplete;                                   // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_629[0x7];                                      // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnComplete;                                        // 0x0630(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsReadyToShowRewardWidget;                         // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_641[0x7];                                      // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortRewardNotificationSubWidget*> SubWidgets;                                        // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          ShowClaimedReward;                                 // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSubWidgetPopulated;                              // 0x0659(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsError;                                           // 0x065A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65B[0x5];                                      // 0x065B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnRewardsClaimed;                                  // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UItemInspectScreen_C*                   ItemInspectScreen;                                 // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnRewardsClaimError;                               // 0x0678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ClaimErrorEnountered;                              // 0x0688(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRunningFrontEndRewards;                           // 0x0689(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TriggerUpdateOnComplete;                           // 0x068A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68B[0x5];                                      // 0x068B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRewardNotificationData*            LastClaimedReward;                                 // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPendingSafePop;                                  // 0x0698(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_699[0x7];                                      // 0x0699(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnRewardsIgnored;                                  // 0x06A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCompleted;                                        // 0x06B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnComplete__DelegateSignature();
	void OnRewardsClaimed__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsClaimError__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void OnRewardsIgnored__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget);
	void ExecuteUbergraph_FrontEndRewards_Widget(int32 EntryPoint);
	void OnMatchmakingOrLobbyStarted();
	void Destruct();
	void IntroSequence();
	void InspectItem(class UFortItem* ItemToInspect);
	void OnDeactivated();
	void HideStarburst(float Delay);
	void OnActivated();
	void Construct();
	void BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPrimaryActionTextChanged(const class FText& Text);
	void OnPrimaryActionHidden();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionDisabled();
	void OnNavigationDown();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void HandleCurrentRewardDisplayed();
	void DropReward(class UFortRewardNotificationData* InReward);
	void PopNextReward();
	void HandleShowHeaderFinished();
	void BindEvents();
	void AdjustCurrentRewardPadding();
	void PopulateCurrentRewardWidget();
	void ShowCurrentReward();
	void Cleanup();
	void HandleExpeditionCompleted(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void InitInitialRewards(const struct FFrontEndRewards_Definition& Definition);
	void HandleChoiceRewardSelected(int32 RewardIndex, class UFortItem* Item);
	void ClaimQuestChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item);
	void CreateCardsFromItemList(TArray<class UFortItem*>& Items, TArray<EFortInventoryType>& ItemInventoryTypeList, TArray<class URewards_ItemCard_C*>* Cards);
	void CreateCardsFromItemQuantityList(TArray<struct FFortItemQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards);
	void CreateCardsFromItemInstanceQuantityList(TArray<struct FFortItemInstanceQuantityPair>& Items, TArray<class URewards_ItemCard_C*>* Cards);
	void ClaimMissionRewards();
	void SetHeaderVisibility();
	void PopulateMissionRewards();
	void PopulateQuestRewards();
	void PopulateNewQuest();
	void PopulateExpedition();
	void PopulateCollectionBookRewards();
	void ClaimQuestListReward();
	void ClaimCollectionBookRewards();
	void ClaimCollectionBookChoiceReward(class UFortRewardNotificationData* NotificationData, int32 SelectionIndex, class UFortItem* Item);
	void HandleOnQuestRewardsClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void HandleOnCollectionBookRewardsClaimed(const struct FFortCollectionBookRewards& RewardRequested, bool Success, TArray<struct FFortItemInstanceQuantityPair>& ActualRewards);
	void PopulateListRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards);
	void HandleOnMissionRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void InitSubWidgets();
	void HandleOpenAnimationFinished();
	void HandleCurrentRewardTransitionOutComplete();
	void PopulateChoiceRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>& Cards);
	void OpenReward();
	void TransitionIn();
	void ResetQueueState();
	void UnbindEvents();
	void HandleOnNoRewardsToClaim();
	void PopulateVO();
	void SkipOpenAnimation();
	void SkipPopAnimation();
	void HandleBorderShown();
	void InitAdditionalRewards(const struct FFrontEndRewards_Definition& Definition);
	void InitializeRewardsData(struct FFrontEndRewards_Definition& FrontEndRewards_Definition);
	void InitRewardsQueue();
	void PopulateMissionAlertRewards();
	void ClaimMissionAlertRewards();
	void HandleOnMissionAlertRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void TriggerUpdateWhenDone();
	void SafePop();
	void DebugPrintChoiceReward(class UObject* Object);
	void HandleOnMissionRewardsClaimFailed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndRewards_Widget_C">();
	}
	static class UFrontEndRewards_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFrontEndRewards_Widget_C>();
	}
};
static_assert(alignof(UFrontEndRewards_Widget_C) == 0x000010, "Wrong alignment on UFrontEndRewards_Widget_C");
static_assert(sizeof(UFrontEndRewards_Widget_C) == 0x0006C0, "Wrong size on UFrontEndRewards_Widget_C");
static_assert(offsetof(UFrontEndRewards_Widget_C, UberGraphFrame) == 0x000570, "Member 'UFrontEndRewards_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, AnimShowBorder) == 0x000578, "Member 'UFrontEndRewards_Widget_C::AnimShowBorder' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, AnimFadeHeader) == 0x000580, "Member 'UFrontEndRewards_Widget_C::AnimFadeHeader' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, AnimShowHeader) == 0x000588, "Member 'UFrontEndRewards_Widget_C::AnimShowHeader' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ButtonPrimaryAction) == 0x000590, "Member 'UFrontEndRewards_Widget_C::ButtonPrimaryAction' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ChoiceRewards) == 0x000598, "Member 'UFrontEndRewards_Widget_C::ChoiceRewards' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ConversationWidget) == 0x0005A0, "Member 'UFrontEndRewards_Widget_C::ConversationWidget' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, CurrentRewardIcon) == 0x0005A8, "Member 'UFrontEndRewards_Widget_C::CurrentRewardIcon' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ExpeditionRewards) == 0x0005B0, "Member 'UFrontEndRewards_Widget_C::ExpeditionRewards' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, InputReflector) == 0x0005B8, "Member 'UFrontEndRewards_Widget_C::InputReflector' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ListRewards) == 0x0005C0, "Member 'UFrontEndRewards_Widget_C::ListRewards' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, NewQuest) == 0x0005C8, "Member 'UFrontEndRewards_Widget_C::NewQuest' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, RewardHeader) == 0x0005D0, "Member 'UFrontEndRewards_Widget_C::RewardHeader' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, RewardsQueue) == 0x0005D8, "Member 'UFrontEndRewards_Widget_C::RewardsQueue' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, RewardSwitcher) == 0x0005E0, "Member 'UFrontEndRewards_Widget_C::RewardSwitcher' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, RotatingStarburst) == 0x0005E8, "Member 'UFrontEndRewards_Widget_C::RotatingStarburst' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, SafeZone_4) == 0x0005F0, "Member 'UFrontEndRewards_Widget_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, SafeZone_5) == 0x0005F8, "Member 'UFrontEndRewards_Widget_C::SafeZone_5' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, SafeZone_6) == 0x000600, "Member 'UFrontEndRewards_Widget_C::SafeZone_6' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, SizeBoxBottom) == 0x000608, "Member 'UFrontEndRewards_Widget_C::SizeBoxBottom' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, SizeBoxTop) == 0x000610, "Member 'UFrontEndRewards_Widget_C::SizeBoxTop' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, TextStorage) == 0x000618, "Member 'UFrontEndRewards_Widget_C::TextStorage' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, CurrentSubWidget) == 0x000620, "Member 'UFrontEndRewards_Widget_C::CurrentSubWidget' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, IsIntroComplete) == 0x000628, "Member 'UFrontEndRewards_Widget_C::IsIntroComplete' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, OnComplete) == 0x000630, "Member 'UFrontEndRewards_Widget_C::OnComplete' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, IsReadyToShowRewardWidget) == 0x000640, "Member 'UFrontEndRewards_Widget_C::IsReadyToShowRewardWidget' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, SubWidgets) == 0x000648, "Member 'UFrontEndRewards_Widget_C::SubWidgets' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ShowClaimedReward) == 0x000658, "Member 'UFrontEndRewards_Widget_C::ShowClaimedReward' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, IsSubWidgetPopulated) == 0x000659, "Member 'UFrontEndRewards_Widget_C::IsSubWidgetPopulated' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, IsError) == 0x00065A, "Member 'UFrontEndRewards_Widget_C::IsError' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, OnRewardsClaimed) == 0x000660, "Member 'UFrontEndRewards_Widget_C::OnRewardsClaimed' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ItemInspectScreen) == 0x000670, "Member 'UFrontEndRewards_Widget_C::ItemInspectScreen' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, OnRewardsClaimError) == 0x000678, "Member 'UFrontEndRewards_Widget_C::OnRewardsClaimError' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, ClaimErrorEnountered) == 0x000688, "Member 'UFrontEndRewards_Widget_C::ClaimErrorEnountered' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, bRunningFrontEndRewards) == 0x000689, "Member 'UFrontEndRewards_Widget_C::bRunningFrontEndRewards' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, TriggerUpdateOnComplete) == 0x00068A, "Member 'UFrontEndRewards_Widget_C::TriggerUpdateOnComplete' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, LastClaimedReward) == 0x000690, "Member 'UFrontEndRewards_Widget_C::LastClaimedReward' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, IsPendingSafePop) == 0x000698, "Member 'UFrontEndRewards_Widget_C::IsPendingSafePop' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, OnRewardsIgnored) == 0x0006A0, "Member 'UFrontEndRewards_Widget_C::OnRewardsIgnored' has a wrong offset!");
static_assert(offsetof(UFrontEndRewards_Widget_C, bCompleted) == 0x0006B0, "Member 'UFrontEndRewards_Widget_C::bCompleted' has a wrong offset!");

}

