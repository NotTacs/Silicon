#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_VulnerableParent

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GET_VulnerableParent.GET_VulnerableParent_C
// 0x0000 (0x0670 - 0x0670)
class UGET_VulnerableParent_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_VulnerableParent_C">();
	}
	static class UGET_VulnerableParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_VulnerableParent_C>();
	}
};
static_assert(alignof(UGET_VulnerableParent_C) == 0x000010, "Wrong alignment on UGET_VulnerableParent_C");
static_assert(sizeof(UGET_VulnerableParent_C) == 0x000670, "Wrong size on UGET_VulnerableParent_C");

}

