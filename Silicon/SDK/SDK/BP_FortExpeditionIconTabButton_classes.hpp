#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionIconTabButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C
// 0x0110 (0x0890 - 0x0780)
class UBP_FortExpeditionIconTabButton_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(Transient, DuplicateTransient)
	class UCommonNumericTextBlock*                AvailableVehicles;                                 // 0x0788(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0790(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Heading;                                           // 0x0798(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x07A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper_0;                               // 0x07A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x07B0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x07C8(0x0078)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                   TabId;                                             // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Hovered_Icon_Tint;                                 // 0x0848(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Selected_Icon_Tint;                                // 0x0858(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Deselected_Icon_Tint;                              // 0x0868(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LandVehicles;                                      // 0x0878(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LandVehiclesAvailable;                             // 0x087C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SeaVehicles;                                       // 0x0880(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SeaVehiclesAvailable;                              // 0x0884(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AirVehicles;                                       // 0x0888(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AirVehiclesAvailable;                              // 0x088C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FortExpeditionIconTabButton(int32 EntryPoint);
	void OnUnhovered();
	void OnHovered();
	void OnDeselected();
	void OnSelected();
	void Construct();
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void OnCurrentTextStyleChanged();
	void Set_Text(const class FText& Param_ButtonText);
	void Set_Icon(const struct FSlateBrush& Param_IconBrush);
	void Refresh_Bang_State();
	void Set_Tab_Id(class FName Param_TabId);
	void Update_Available_Vehicles();
	void Update_All_Vehicles();
	void Update_Land_Vehicles();
	void Update_Sea_Vehicles();
	void Update_Air_Vehicles();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionIconTabButton_C">();
	}
	static class UBP_FortExpeditionIconTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionIconTabButton_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionIconTabButton_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionIconTabButton_C");
static_assert(sizeof(UBP_FortExpeditionIconTabButton_C) == 0x000890, "Wrong size on UBP_FortExpeditionIconTabButton_C");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, UberGraphFrame) == 0x000780, "Member 'UBP_FortExpeditionIconTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, AvailableVehicles) == 0x000788, "Member 'UBP_FortExpeditionIconTabButton_C::AvailableVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, CenterButtonTextWidget) == 0x000790, "Member 'UBP_FortExpeditionIconTabButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Heading) == 0x000798, "Member 'UBP_FortExpeditionIconTabButton_C::Heading' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, LeftSideImage) == 0x0007A0, "Member 'UBP_FortExpeditionIconTabButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, NormalBangWrapper_0) == 0x0007A8, "Member 'UBP_FortExpeditionIconTabButton_C::NormalBangWrapper_0' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, ButtonText) == 0x0007B0, "Member 'UBP_FortExpeditionIconTabButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, IconBrush) == 0x0007C8, "Member 'UBP_FortExpeditionIconTabButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, TabId) == 0x000840, "Member 'UBP_FortExpeditionIconTabButton_C::TabId' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Hovered_Icon_Tint) == 0x000848, "Member 'UBP_FortExpeditionIconTabButton_C::Hovered_Icon_Tint' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Selected_Icon_Tint) == 0x000858, "Member 'UBP_FortExpeditionIconTabButton_C::Selected_Icon_Tint' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, Deselected_Icon_Tint) == 0x000868, "Member 'UBP_FortExpeditionIconTabButton_C::Deselected_Icon_Tint' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, LandVehicles) == 0x000878, "Member 'UBP_FortExpeditionIconTabButton_C::LandVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, LandVehiclesAvailable) == 0x00087C, "Member 'UBP_FortExpeditionIconTabButton_C::LandVehiclesAvailable' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, SeaVehicles) == 0x000880, "Member 'UBP_FortExpeditionIconTabButton_C::SeaVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, SeaVehiclesAvailable) == 0x000884, "Member 'UBP_FortExpeditionIconTabButton_C::SeaVehiclesAvailable' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, AirVehicles) == 0x000888, "Member 'UBP_FortExpeditionIconTabButton_C::AirVehicles' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionIconTabButton_C, AirVehiclesAvailable) == 0x00088C, "Member 'UBP_FortExpeditionIconTabButton_C::AirVehiclesAvailable' has a wrong offset!");

}

