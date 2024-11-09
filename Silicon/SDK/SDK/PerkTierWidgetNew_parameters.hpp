#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkTierWidgetNew

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
// 0x00D0 (0x00D0 - 0x0000)
struct PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkDivider_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIPerk                            K2Node_Event_Perk;                                 // 0x0018(0x0098)()
	class UFortPerkWidget_NUI*                    K2Node_Event_PerkWidget;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkWidgetNew_C*                       K2Node_DynamicCast_AsPerk_Widget_New;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue2;                    // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew) == 0x000008, "Wrong alignment on PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew");
static_assert(sizeof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew) == 0x0000D0, "Wrong size on PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, EntryPoint) == 0x000000, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::EntryPoint' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, CallFunc_Create_ReturnValue) == 0x000008, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, K2Node_Event_Perk) == 0x000018, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::K2Node_Event_Perk' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, K2Node_Event_PerkWidget) == 0x0000B0, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::K2Node_Event_PerkWidget' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, K2Node_DynamicCast_AsPerk_Widget_New) == 0x0000B8, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::K2Node_DynamicCast_AsPerk_Widget_New' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew, CallFunc_AddChild_ReturnValue2) == 0x0000C8, "Member 'PerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew::CallFunc_AddChild_ReturnValue2' has a wrong offset!");

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
// 0x00A0 (0x00A0 - 0x0000)
struct PerkTierWidgetNew_C_OnGeneratePerk final
{
public:
	struct FFortUIPerk                            Perk;                                              // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortPerkWidget_NUI*                    Param_PerkWidget;                                  // 0x0098(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkTierWidgetNew_C_OnGeneratePerk) == 0x000008, "Wrong alignment on PerkTierWidgetNew_C_OnGeneratePerk");
static_assert(sizeof(PerkTierWidgetNew_C_OnGeneratePerk) == 0x0000A0, "Wrong size on PerkTierWidgetNew_C_OnGeneratePerk");
static_assert(offsetof(PerkTierWidgetNew_C_OnGeneratePerk, Perk) == 0x000000, "Member 'PerkTierWidgetNew_C_OnGeneratePerk::Perk' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_OnGeneratePerk, Param_PerkWidget) == 0x000098, "Member 'PerkTierWidgetNew_C_OnGeneratePerk::Param_PerkWidget' has a wrong offset!");

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
// 0x0028 (0x0028 - 0x0000)
struct PerkTierWidgetNew_C_InitializeSettings final
{
public:
	bool                                          Param_bIncludeName;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bIncludeDescription;                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortBrushSize                                Param_IconSize;                                    // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUIPerkTier                        Param_FortPerkTier;                                // 0x0008(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(PerkTierWidgetNew_C_InitializeSettings) == 0x000008, "Wrong alignment on PerkTierWidgetNew_C_InitializeSettings");
static_assert(sizeof(PerkTierWidgetNew_C_InitializeSettings) == 0x000028, "Wrong size on PerkTierWidgetNew_C_InitializeSettings");
static_assert(offsetof(PerkTierWidgetNew_C_InitializeSettings, Param_bIncludeName) == 0x000000, "Member 'PerkTierWidgetNew_C_InitializeSettings::Param_bIncludeName' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_InitializeSettings, Param_bIncludeDescription) == 0x000001, "Member 'PerkTierWidgetNew_C_InitializeSettings::Param_bIncludeDescription' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_InitializeSettings, Param_IconSize) == 0x000002, "Member 'PerkTierWidgetNew_C_InitializeSettings::Param_IconSize' has a wrong offset!");
static_assert(offsetof(PerkTierWidgetNew_C_InitializeSettings, Param_FortPerkTier) == 0x000008, "Member 'PerkTierWidgetNew_C_InitializeSettings::Param_FortPerkTier' has a wrong offset!");

}

