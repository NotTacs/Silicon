#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PermissionsRoot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PermissionsRoot.PermissionsRoot_C
// 0x0038 (0x03F8 - 0x03C0)
class UPermissionsRoot_C final : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                  Outpost_Screen_WidgetSwitcher;                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OutpostLevel_Text;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OutpostName_Text;                                  // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOutpostScreenStormShieldPermissions_C* OutpostScreenStormShieldPermissions;               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_2;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PermissionsRoot(int32 EntryPoint);
	void OnActivated();
	void Construct();
	void RefreshOutpostInfo();
	void Input_Handle_Back(bool* Passthrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PermissionsRoot_C">();
	}
	static class UPermissionsRoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPermissionsRoot_C>();
	}
};
static_assert(alignof(UPermissionsRoot_C) == 0x000008, "Wrong alignment on UPermissionsRoot_C");
static_assert(sizeof(UPermissionsRoot_C) == 0x0003F8, "Wrong size on UPermissionsRoot_C");
static_assert(offsetof(UPermissionsRoot_C, UberGraphFrame) == 0x0003C0, "Member 'UPermissionsRoot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPermissionsRoot_C, Outpost_Screen_WidgetSwitcher) == 0x0003C8, "Member 'UPermissionsRoot_C::Outpost_Screen_WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UPermissionsRoot_C, OutpostLevel_Text) == 0x0003D0, "Member 'UPermissionsRoot_C::OutpostLevel_Text' has a wrong offset!");
static_assert(offsetof(UPermissionsRoot_C, OutpostName_Text) == 0x0003D8, "Member 'UPermissionsRoot_C::OutpostName_Text' has a wrong offset!");
static_assert(offsetof(UPermissionsRoot_C, OutpostScreenStormShieldPermissions) == 0x0003E0, "Member 'UPermissionsRoot_C::OutpostScreenStormShieldPermissions' has a wrong offset!");
static_assert(offsetof(UPermissionsRoot_C, PlayerBanner) == 0x0003E8, "Member 'UPermissionsRoot_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UPermissionsRoot_C, SafeZone_2) == 0x0003F0, "Member 'UPermissionsRoot_C::SafeZone_2' has a wrong offset!");

}

