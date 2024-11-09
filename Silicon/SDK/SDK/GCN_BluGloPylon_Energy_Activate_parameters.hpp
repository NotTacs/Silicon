#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_BluGloPylon_Energy_Activate

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_BluGloPylon_Energy_Activate.GCN_BluGloPylon_Energy_Activate_C.OnStartParticleSystemSpawned
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned) == 0x0000C8, "Wrong size on GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000C0, "Member 'GCN_BluGloPylon_Energy_Activate_C_OnStartParticleSystemSpawned::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

