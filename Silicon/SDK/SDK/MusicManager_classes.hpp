#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MusicManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MusicManager.MusicManager_C
// 0x00F8 (0x04A8 - 0x03B0)
class AMusicManager_C final : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(Transient, DuplicateTransient)
	class USoundBase*                             MusicFrontend;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicLobby;                                        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerReturningToAmbientMusic;                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerMorning;                                    // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicMorning;                                      // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicDay;                                          // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerEvening;                                    // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicEvening;                                      // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StingerNight;                                      // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             MusicNight;                                        // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_409[0x7];                                      // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GameMode_Current;                                  // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameMode_Lobby;                                    // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameMode_Frontend;                                 // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameMode_InGame;                                   // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayStingerWhenReturningToAmbientMusic;            // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingAmbientMusic;                               // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingThreatMusic;                                // 0x0432(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingNearbyEnemiesMusic;                         // 0x0433(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingHuskLowMusic;                               // 0x0434(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingHuskHighMusic;                              // 0x0435(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayingLargeEnemyMusic;                            // 0x0436(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_437[0x1];                                      // 0x0437(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastTimeMusicWasStartedOrContinued;                // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentMusicIntensityLevel;                        // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 CurrentDayPhase;                                   // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             LargeEnemyStinger;                                 // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LargeEnemyMusic;                                   // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskHighStinger;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskHighMusic;                                     // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskLowStinger;                                    // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HuskLowMusic;                                      // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             NearbyEnemiesStinger;                              // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             NearbyEnemiesMusic;                                // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MusicLogicUpdateTickTime;                          // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinDurationBeforeMusicCanIncreaseIntensity;        // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntensityIncreaseFadeTime;                         // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMusicFadeStyles                              IntensityIncreaseFadeStyle;                        // 0x0494(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_495[0x3];                                      // 0x0495(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinDurationBeforeMusicCanDecreaseInIntensity;      // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntensityDecreaseFadeTime;                         // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMusicFadeStyles                              IntensityDecreaseFadeStyle;                        // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MusicShouldStop;                                   // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MusicManager(int32 EntryPoint);
	void StopMusic();
	void StartMusic();
	void ReceiveBeginPlay();
	void PlayAmbientMusic();
	void OnUpdateMusic();
	void OnDayPhaseChanged(EFortDayPhase Param_CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void UserConstructionScript();
	void ResetMusicBools();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MusicManager_C">();
	}
	static class AMusicManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMusicManager_C>();
	}
};
static_assert(alignof(AMusicManager_C) == 0x000008, "Wrong alignment on AMusicManager_C");
static_assert(sizeof(AMusicManager_C) == 0x0004A8, "Wrong size on AMusicManager_C");
static_assert(offsetof(AMusicManager_C, UberGraphFrame) == 0x0003B0, "Member 'AMusicManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicFrontend) == 0x0003B8, "Member 'AMusicManager_C::MusicFrontend' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicLobby) == 0x0003C0, "Member 'AMusicManager_C::MusicLobby' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, StingerReturningToAmbientMusic) == 0x0003C8, "Member 'AMusicManager_C::StingerReturningToAmbientMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, StingerMorning) == 0x0003D0, "Member 'AMusicManager_C::StingerMorning' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicMorning) == 0x0003D8, "Member 'AMusicManager_C::MusicMorning' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicDay) == 0x0003E0, "Member 'AMusicManager_C::MusicDay' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, StingerEvening) == 0x0003E8, "Member 'AMusicManager_C::StingerEvening' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicEvening) == 0x0003F0, "Member 'AMusicManager_C::MusicEvening' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, StingerNight) == 0x0003F8, "Member 'AMusicManager_C::StingerNight' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicNight) == 0x000400, "Member 'AMusicManager_C::MusicNight' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, Debug) == 0x000408, "Member 'AMusicManager_C::Debug' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, GameMode_Current) == 0x000410, "Member 'AMusicManager_C::GameMode_Current' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, GameMode_Lobby) == 0x000418, "Member 'AMusicManager_C::GameMode_Lobby' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, GameMode_Frontend) == 0x000420, "Member 'AMusicManager_C::GameMode_Frontend' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, GameMode_InGame) == 0x000428, "Member 'AMusicManager_C::GameMode_InGame' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, PlayStingerWhenReturningToAmbientMusic) == 0x000430, "Member 'AMusicManager_C::PlayStingerWhenReturningToAmbientMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, PlayingAmbientMusic) == 0x000431, "Member 'AMusicManager_C::PlayingAmbientMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, PlayingThreatMusic) == 0x000432, "Member 'AMusicManager_C::PlayingThreatMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, PlayingNearbyEnemiesMusic) == 0x000433, "Member 'AMusicManager_C::PlayingNearbyEnemiesMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, PlayingHuskLowMusic) == 0x000434, "Member 'AMusicManager_C::PlayingHuskLowMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, PlayingHuskHighMusic) == 0x000435, "Member 'AMusicManager_C::PlayingHuskHighMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, PlayingLargeEnemyMusic) == 0x000436, "Member 'AMusicManager_C::PlayingLargeEnemyMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, LastTimeMusicWasStartedOrContinued) == 0x000438, "Member 'AMusicManager_C::LastTimeMusicWasStartedOrContinued' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, CurrentMusicIntensityLevel) == 0x00043C, "Member 'AMusicManager_C::CurrentMusicIntensityLevel' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, CurrentDayPhase) == 0x000440, "Member 'AMusicManager_C::CurrentDayPhase' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, LargeEnemyStinger) == 0x000448, "Member 'AMusicManager_C::LargeEnemyStinger' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, LargeEnemyMusic) == 0x000450, "Member 'AMusicManager_C::LargeEnemyMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, HuskHighStinger) == 0x000458, "Member 'AMusicManager_C::HuskHighStinger' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, HuskHighMusic) == 0x000460, "Member 'AMusicManager_C::HuskHighMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, HuskLowStinger) == 0x000468, "Member 'AMusicManager_C::HuskLowStinger' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, HuskLowMusic) == 0x000470, "Member 'AMusicManager_C::HuskLowMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, NearbyEnemiesStinger) == 0x000478, "Member 'AMusicManager_C::NearbyEnemiesStinger' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, NearbyEnemiesMusic) == 0x000480, "Member 'AMusicManager_C::NearbyEnemiesMusic' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicLogicUpdateTickTime) == 0x000488, "Member 'AMusicManager_C::MusicLogicUpdateTickTime' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MinDurationBeforeMusicCanIncreaseIntensity) == 0x00048C, "Member 'AMusicManager_C::MinDurationBeforeMusicCanIncreaseIntensity' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, IntensityIncreaseFadeTime) == 0x000490, "Member 'AMusicManager_C::IntensityIncreaseFadeTime' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, IntensityIncreaseFadeStyle) == 0x000494, "Member 'AMusicManager_C::IntensityIncreaseFadeStyle' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MinDurationBeforeMusicCanDecreaseInIntensity) == 0x000498, "Member 'AMusicManager_C::MinDurationBeforeMusicCanDecreaseInIntensity' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, IntensityDecreaseFadeTime) == 0x00049C, "Member 'AMusicManager_C::IntensityDecreaseFadeTime' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, IntensityDecreaseFadeStyle) == 0x0004A0, "Member 'AMusicManager_C::IntensityDecreaseFadeStyle' has a wrong offset!");
static_assert(offsetof(AMusicManager_C, MusicShouldStop) == 0x0004A1, "Member 'AMusicManager_C::MusicShouldStop' has a wrong offset!");

}

