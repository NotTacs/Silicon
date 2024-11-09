#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Map_Resistance_To_Shield

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Map_Resistance_To_Shield.GE_Map_Resistance_To_Shield_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Map_Resistance_To_Shield_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Map_Resistance_To_Shield_C">();
	}
	static class UGE_Map_Resistance_To_Shield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Map_Resistance_To_Shield_C>();
	}
};
static_assert(alignof(UGE_Map_Resistance_To_Shield_C) == 0x000010, "Wrong alignment on UGE_Map_Resistance_To_Shield_C");
static_assert(sizeof(UGE_Map_Resistance_To_Shield_C) == 0x000670, "Wrong size on UGE_Map_Resistance_To_Shield_C");

}

