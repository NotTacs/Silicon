#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_M1_DoorSide

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_M1_DoorSide.PBWA_M1_DoorSide_C
// 0x0000 (0x0E50 - 0x0E50)
class APBWA_M1_DoorSide_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_M1_DoorSide_C">();
	}
	static class APBWA_M1_DoorSide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_M1_DoorSide_C>();
	}
};
static_assert(alignof(APBWA_M1_DoorSide_C) == 0x000008, "Wrong alignment on APBWA_M1_DoorSide_C");
static_assert(sizeof(APBWA_M1_DoorSide_C) == 0x000E50, "Wrong size on APBWA_M1_DoorSide_C");

}

