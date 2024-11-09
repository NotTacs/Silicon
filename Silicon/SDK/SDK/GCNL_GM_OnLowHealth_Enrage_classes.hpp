#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnLowHealth_Enrage

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C
// 0x0020 (0x04B0 - 0x0490)
class AGCNL_GM_OnLowHealth_Enrage_C final : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*               BodyMistFX;                                        // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Hand_Trail_L;                                      // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               HandTrailR;                                        // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_OnLowHealth_Enrage_C">();
	}
	static class AGCNL_GM_OnLowHealth_Enrage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_OnLowHealth_Enrage_C>();
	}
};
static_assert(alignof(AGCNL_GM_OnLowHealth_Enrage_C) == 0x000010, "Wrong alignment on AGCNL_GM_OnLowHealth_Enrage_C");
static_assert(sizeof(AGCNL_GM_OnLowHealth_Enrage_C) == 0x0004B0, "Wrong size on AGCNL_GM_OnLowHealth_Enrage_C");
static_assert(offsetof(AGCNL_GM_OnLowHealth_Enrage_C, BodyMistFX) == 0x000490, "Member 'AGCNL_GM_OnLowHealth_Enrage_C::BodyMistFX' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnLowHealth_Enrage_C, Hand_Trail_L) == 0x000498, "Member 'AGCNL_GM_OnLowHealth_Enrage_C::Hand_Trail_L' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnLowHealth_Enrage_C, HandTrailR) == 0x0004A0, "Member 'AGCNL_GM_OnLowHealth_Enrage_C::HandTrailR' has a wrong offset!");

}

