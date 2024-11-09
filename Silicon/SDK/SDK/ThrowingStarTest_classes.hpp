#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThrowingStarTest

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ThrowingStarTest.ThrowingStarTest_C
// 0x0000 (0x0080 - 0x0080)
class UThrowingStarTest_C final : public UGameplayCueNotify_Static
{
public:
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ThrowingStarTest_C">();
	}
	static class UThrowingStarTest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThrowingStarTest_C>();
	}
};
static_assert(alignof(UThrowingStarTest_C) == 0x000010, "Wrong alignment on UThrowingStarTest_C");
static_assert(sizeof(UThrowingStarTest_C) == 0x000080, "Wrong size on UThrowingStarTest_C");

}

