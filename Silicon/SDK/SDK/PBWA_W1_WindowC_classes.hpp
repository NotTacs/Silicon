#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_W1_WindowC

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_W1_WindowC.PBWA_W1_WindowC_C
// 0x0000 (0x0E50 - 0x0E50)
class APBWA_W1_WindowC_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_W1_WindowC_C">();
	}
	static class APBWA_W1_WindowC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_W1_WindowC_C>();
	}
};
static_assert(alignof(APBWA_W1_WindowC_C) == 0x000008, "Wrong alignment on APBWA_W1_WindowC_C");
static_assert(sizeof(APBWA_W1_WindowC_C) == 0x000E50, "Wrong size on APBWA_W1_WindowC_C");

}

