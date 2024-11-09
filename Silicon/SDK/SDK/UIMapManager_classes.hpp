#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIMapManager

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UIMapManager.UIMapManager_C
// 0x0008 (0x04D8 - 0x04D0)
class AUIMapManager_C final : public AFortInGameMapManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIMapManager_C">();
	}
	static class AUIMapManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUIMapManager_C>();
	}
};
static_assert(alignof(AUIMapManager_C) == 0x000008, "Wrong alignment on AUIMapManager_C");
static_assert(sizeof(AUIMapManager_C) == 0x0004D8, "Wrong size on AUIMapManager_C");
static_assert(offsetof(AUIMapManager_C, DefaultSceneRoot) == 0x0004D0, "Member 'AUIMapManager_C::DefaultSceneRoot' has a wrong offset!");

}

