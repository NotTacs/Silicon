#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaWatchers

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaWatchers.AthenaWatchers_C
// 0x0008 (0x0240 - 0x0238)
class UAthenaWatchers_C final : public UFortHUDElementWidget
{
public:
	class UImage*                                 Image_50;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaWatchers_C">();
	}
	static class UAthenaWatchers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaWatchers_C>();
	}
};
static_assert(alignof(UAthenaWatchers_C) == 0x000008, "Wrong alignment on UAthenaWatchers_C");
static_assert(sizeof(UAthenaWatchers_C) == 0x000240, "Wrong size on UAthenaWatchers_C");
static_assert(offsetof(UAthenaWatchers_C, Image_50) == 0x000238, "Member 'UAthenaWatchers_C::Image_50' has a wrong offset!");

}

