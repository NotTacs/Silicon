#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_GenericDeath

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
// 0x02C0 (0x02C0 - 0x0000)
struct GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue2;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_MakeStruct_GameplayCueParameters;           // 0x0030(0x00B8)(ContainsInstancedReference)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0100(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_VictoryDrone_C*                     CallFunc_FinishSpawningActor_ReturnValue;          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue2;         // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue3;         // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue4;         // 0x015D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15E[0x2];                                      // 0x015E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0160(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   CallFunc_GetRandomSectionName_SectionName;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomSectionName_SectionName2;        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomSectionName_SectionName3;        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomSectionName_SectionName4;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue5;         // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue6;         // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue7;         // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue8;         // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x7];                                      // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetRandomSectionName_SectionName5;        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomSectionName_SectionName6;        // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomSectionName_SectionName7;        // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetRandomSectionName_SectionName8;        // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x01C8(0x0010)(ZeroConstructor, NoDestructor)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue3;           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;                  // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDamageZone                               CallFunc_GetDamageZone_ReturnValue;                // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EB[0x5];                                      // 0x01EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x01F0(0x00A8)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0298(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   CallFunc_SetFNameBasedOnHitDirection_NameResult;   // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_SetFNameBasedOnHitDirection_NameResult2;  // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath) == 0x000010, "Wrong alignment on GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath");
static_assert(sizeof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath) == 0x0002C0, "Wrong size on GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, EntryPoint) == 0x000000, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetActivatingPawn_ReturnValue) == 0x000018, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_Event_bWasCancelled) == 0x000020, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetActivatingPawn_ReturnValue2) == 0x000028, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetActivatingPawn_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_MakeStruct_GameplayCueParameters) == 0x000030, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_MakeStruct_GameplayCueParameters' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_HasAuthority_ReturnValue) == 0x0000E8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000F0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000100, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000130, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000138, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000148, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_FinishSpawningActor_ReturnValue) == 0x000150, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_BooleanOR_ReturnValue) == 0x000158, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_BooleanAND_ReturnValue) == 0x000159, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00015A, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue2) == 0x00015B, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue3) == 0x00015C, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue4) == 0x00015D, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue4' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate2) == 0x000160, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName) == 0x000170, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName2) == 0x000178, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName3) == 0x000180, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName3' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName4) == 0x000188, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName4' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue5) == 0x000190, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue5' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue6) == 0x000191, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue6' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue7) == 0x000192, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue7' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_NameName_ReturnValue8) == 0x000193, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_NameName_ReturnValue8' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000198, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_IsValid_ReturnValue) == 0x0001A0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName5) == 0x0001A8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName5' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName6) == 0x0001B0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName6' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName7) == 0x0001B8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName7' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetRandomSectionName_SectionName8) == 0x0001C0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetRandomSectionName_SectionName8' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate3) == 0x0001C8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetActivatingPawn_ReturnValue3) == 0x0001D8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetActivatingPawn_ReturnValue3' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_AsFort_AIPawn) == 0x0001E0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_DynamicCast_bSuccess2) == 0x0001E8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_GetDamageZone_ReturnValue) == 0x0001E9, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_GetDamageZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001EA, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_Event_EventData) == 0x0001F0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, K2Node_CreateDelegate_OutputDelegate4) == 0x000298, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_SetFNameBasedOnHitDirection_NameResult) == 0x0002A8, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_SetFNameBasedOnHitDirection_NameResult' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath, CallFunc_SetFNameBasedOnHitDirection_NameResult2) == 0x0002B0, "Member 'GAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath::CallFunc_SetFNameBasedOnHitDirection_NameResult2' has a wrong offset!");

// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_GenericDeath_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_GenericDeath_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_GenericDeath_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_GenericDeath_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_GenericDeath_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_GenericDeath_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_GenericDeath_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_GenericDeath_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_GenericDeath_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_GenericDeath_C_K2_OnEndAbility");
static_assert(sizeof(GAB_GenericDeath_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_GenericDeath_C_K2_OnEndAbility");
static_assert(offsetof(GAB_GenericDeath_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_GenericDeath_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
// 0x0150 (0x0150 - 0x0000)
struct GAB_GenericDeath_C_InitializeDeathHitDirection final
{
public:
	struct FGameplayEventData                     EventHitData;                                      // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;          // 0x00A8(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_EffectContextGetHitResult_ReturnValue;    // 0x00C0(0x0080)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0140(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_GenericDeath_C_InitializeDeathHitDirection) == 0x000008, "Wrong alignment on GAB_GenericDeath_C_InitializeDeathHitDirection");
static_assert(sizeof(GAB_GenericDeath_C_InitializeDeathHitDirection) == 0x000150, "Wrong size on GAB_GenericDeath_C_InitializeDeathHitDirection");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, EventHitData) == 0x000000, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::EventHitData' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_ImpulseDirection) == 0x0000A8, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x0000B4, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackZAngle) == 0x0000B8, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_EffectContextGetHitResult_ReturnValue) == 0x0000C0, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_EffectContextGetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_InitializeDeathHitDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000140, "Member 'GAB_GenericDeath_C_InitializeDeathHitDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
// 0x0078 (0x0078 - 0x0000)
struct GAB_GenericDeath_C_GetRandomSectionName final
{
public:
	int32                                         MaxNumberOfSections;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   OriginalSectionName;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SectionName;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue2;               // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_GenericDeath_C_GetRandomSectionName) == 0x000008, "Wrong alignment on GAB_GenericDeath_C_GetRandomSectionName");
static_assert(sizeof(GAB_GenericDeath_C_GetRandomSectionName) == 0x000078, "Wrong size on GAB_GenericDeath_C_GetRandomSectionName");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, MaxNumberOfSections) == 0x000000, "Member 'GAB_GenericDeath_C_GetRandomSectionName::MaxNumberOfSections' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, OriginalSectionName) == 0x000008, "Member 'GAB_GenericDeath_C_GetRandomSectionName::OriginalSectionName' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, SectionName) == 0x000010, "Member 'GAB_GenericDeath_C_GetRandomSectionName::SectionName' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_RandomInteger_ReturnValue) == 0x000018, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Conv_NameToString_ReturnValue) == 0x000020, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Concat_StrStr_ReturnValue2) == 0x000050, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Concat_StrStr_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_MakeLiteralString_ReturnValue) == 0x000060, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_GenericDeath_C_GetRandomSectionName, CallFunc_Conv_StringToName_ReturnValue) == 0x000070, "Member 'GAB_GenericDeath_C_GetRandomSectionName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

}

