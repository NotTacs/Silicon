#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NearestPlayerContext

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NearestPlayerContext.NearestPlayerContext_C.ProvideSingleLocation
// 0x0050 (0x0050 - 0x0000)
struct NearestPlayerContext_C_ProvideSingleLocation final
{
public:
	class UObject*                                QuerierObject;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 QuerierActor;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ResultingLocation;                                 // 0x0010(0x000C)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x001C(0x000C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_GetClosestFortPlayerPawn_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x0044(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NearestPlayerContext_C_ProvideSingleLocation) == 0x000008, "Wrong alignment on NearestPlayerContext_C_ProvideSingleLocation");
static_assert(sizeof(NearestPlayerContext_C_ProvideSingleLocation) == 0x000050, "Wrong size on NearestPlayerContext_C_ProvideSingleLocation");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, QuerierObject) == 0x000000, "Member 'NearestPlayerContext_C_ProvideSingleLocation::QuerierObject' has a wrong offset!");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, QuerierActor) == 0x000008, "Member 'NearestPlayerContext_C_ProvideSingleLocation::QuerierActor' has a wrong offset!");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, ResultingLocation) == 0x000010, "Member 'NearestPlayerContext_C_ProvideSingleLocation::ResultingLocation' has a wrong offset!");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, Location) == 0x00001C, "Member 'NearestPlayerContext_C_ProvideSingleLocation::Location' has a wrong offset!");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'NearestPlayerContext_C_ProvideSingleLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, CallFunc_GetClosestFortPlayerPawn_ReturnValue) == 0x000038, "Member 'NearestPlayerContext_C_ProvideSingleLocation::CallFunc_GetClosestFortPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'NearestPlayerContext_C_ProvideSingleLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NearestPlayerContext_C_ProvideSingleLocation, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x000044, "Member 'NearestPlayerContext_C_ProvideSingleLocation::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");

}

