#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FriendNotification.FriendNotification_C
// 0x0008 (0x00B0 - 0x00A8)
class UFriendNotification_C final : public UFortUIFriendNotification
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_FriendNotification(int32 EntryPoint);
	void TakeAction();
	void ShowPartyInvites();
	void ShowFriendInvites();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FriendNotification_C">();
	}
	static class UFriendNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFriendNotification_C>();
	}
};
static_assert(alignof(UFriendNotification_C) == 0x000008, "Wrong alignment on UFriendNotification_C");
static_assert(sizeof(UFriendNotification_C) == 0x0000B0, "Wrong size on UFriendNotification_C");
static_assert(offsetof(UFriendNotification_C, UberGraphFrame) == 0x0000A8, "Member 'UFriendNotification_C::UberGraphFrame' has a wrong offset!");

}

