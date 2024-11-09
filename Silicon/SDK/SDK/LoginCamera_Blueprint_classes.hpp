#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCamera_Blueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LoginCamera_Blueprint.LoginCamera_Blueprint_C
// 0x0020 (0x0900 - 0x08E0)
class ALoginCamera_Blueprint_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08E0(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x08E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       LoginCamera_0;                                     // 0x08F0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoginCamera_Blueprint(int32 EntryPoint);
	void OnActivated();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginCamera_Blueprint_C">();
	}
	static class ALoginCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALoginCamera_Blueprint_C>();
	}
};
static_assert(alignof(ALoginCamera_Blueprint_C) == 0x000010, "Wrong alignment on ALoginCamera_Blueprint_C");
static_assert(sizeof(ALoginCamera_Blueprint_C) == 0x000900, "Wrong size on ALoginCamera_Blueprint_C");
static_assert(offsetof(ALoginCamera_Blueprint_C, UberGraphFrame) == 0x0008E0, "Member 'ALoginCamera_Blueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALoginCamera_Blueprint_C, StaticMesh) == 0x0008E8, "Member 'ALoginCamera_Blueprint_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ALoginCamera_Blueprint_C, LoginCamera_0) == 0x0008F0, "Member 'ALoginCamera_Blueprint_C::LoginCamera_0' has a wrong offset!");

}

