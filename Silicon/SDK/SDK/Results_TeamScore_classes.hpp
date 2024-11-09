#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeamScore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_TeamScore.Results_TeamScore_C
// 0x00A0 (0x02B0 - 0x0210)
class UResults_TeamScore_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_ContinueButtonOutro;                          // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ContinueButtonIntro;                          // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonContinue;                                    // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*                RowBuilding;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*                RowCombat;                                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*                RowMission;                                        // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_TeamScoreRow_C*                RowUtility;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         TimeBetweenRowIntros;                              // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenRowCounts;                              // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Finished;                                          // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         TimeBetweenIntroAndTeamScore;                      // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenTeamScoreAndTotalScore;                 // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenTotalScoreAndContinue;                  // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenSkipAndContinue;                        // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkippedToEnd;                                     // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSkippingToEnd;                                    // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27A[0x2];                                      // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayRate;                                          // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_TeamTotalScore_C*              TeamTotalScore;                                    // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenRowAbsorptionStops;                     // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanSkipToEnd;                                     // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28D[0x3];                                      // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Start;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CenterMeetGrfx;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CenterFillFX;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             FillEnd;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Finished__DelegateSignature();
	void ExecuteUbergraph_Results_TeamScore(int32 EntryPoint);
	void BndEvt__Anim_ContinueButtonIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Skip();
	void BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature();
	void On_Count_Score_Finished();
	void Skip_To_End__Sequence();
	void BndEvt__ScoreRowUtility_K2Node_ComponentBoundEvent_1_CountUpFinished__DelegateSignature();
	void BndEvt__Anim_ContinueButtonOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void Count_Team_Scores_Sequence();
	void Count_Total_Score_Sequence();
	void Intro_Sequence();
	void Initialize(class UFortUIScoreReport* ScoreReport, class UResults_TeamTotalScore_C* Param_TeamTotalScore);
	void SkipToFinalState();
	void InitializeDelays();
	void Focus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_TeamScore_C">();
	}
	static class UResults_TeamScore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_TeamScore_C>();
	}
};
static_assert(alignof(UResults_TeamScore_C) == 0x000008, "Wrong alignment on UResults_TeamScore_C");
static_assert(sizeof(UResults_TeamScore_C) == 0x0002B0, "Wrong size on UResults_TeamScore_C");
static_assert(offsetof(UResults_TeamScore_C, UberGraphFrame) == 0x000210, "Member 'UResults_TeamScore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, Anim_ContinueButtonOutro) == 0x000218, "Member 'UResults_TeamScore_C::Anim_ContinueButtonOutro' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, Anim_ContinueButtonIntro) == 0x000220, "Member 'UResults_TeamScore_C::Anim_ContinueButtonIntro' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, ButtonContinue) == 0x000228, "Member 'UResults_TeamScore_C::ButtonContinue' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, RowBuilding) == 0x000230, "Member 'UResults_TeamScore_C::RowBuilding' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, RowCombat) == 0x000238, "Member 'UResults_TeamScore_C::RowCombat' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, RowMission) == 0x000240, "Member 'UResults_TeamScore_C::RowMission' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, RowUtility) == 0x000248, "Member 'UResults_TeamScore_C::RowUtility' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TimeBetweenRowIntros) == 0x000250, "Member 'UResults_TeamScore_C::TimeBetweenRowIntros' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TimeBetweenRowCounts) == 0x000254, "Member 'UResults_TeamScore_C::TimeBetweenRowCounts' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, Finished) == 0x000258, "Member 'UResults_TeamScore_C::Finished' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TimeBetweenIntroAndTeamScore) == 0x000268, "Member 'UResults_TeamScore_C::TimeBetweenIntroAndTeamScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TimeBetweenTeamScoreAndTotalScore) == 0x00026C, "Member 'UResults_TeamScore_C::TimeBetweenTeamScoreAndTotalScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TimeBetweenTotalScoreAndContinue) == 0x000270, "Member 'UResults_TeamScore_C::TimeBetweenTotalScoreAndContinue' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TimeBetweenSkipAndContinue) == 0x000274, "Member 'UResults_TeamScore_C::TimeBetweenSkipAndContinue' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, bSkippedToEnd) == 0x000278, "Member 'UResults_TeamScore_C::bSkippedToEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, bSkippingToEnd) == 0x000279, "Member 'UResults_TeamScore_C::bSkippingToEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, PlayRate) == 0x00027C, "Member 'UResults_TeamScore_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TeamTotalScore) == 0x000280, "Member 'UResults_TeamScore_C::TeamTotalScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, TimeBetweenRowAbsorptionStops) == 0x000288, "Member 'UResults_TeamScore_C::TimeBetweenRowAbsorptionStops' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, bCanSkipToEnd) == 0x00028C, "Member 'UResults_TeamScore_C::bCanSkipToEnd' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, Start) == 0x000290, "Member 'UResults_TeamScore_C::Start' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, CenterMeetGrfx) == 0x000298, "Member 'UResults_TeamScore_C::CenterMeetGrfx' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, CenterFillFX) == 0x0002A0, "Member 'UResults_TeamScore_C::CenterFillFX' has a wrong offset!");
static_assert(offsetof(UResults_TeamScore_C, FillEnd) == 0x0002A8, "Member 'UResults_TeamScore_C::FillEnd' has a wrong offset!");

}

