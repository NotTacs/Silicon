#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionModifierItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MissionModifierItem.MissionModifierItem_C.ExecuteUbergraph_MissionModifierItem
// 0x0008 (0x0008 - 0x0000)
struct MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue2;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue3;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem) == 0x000004, "Wrong alignment on MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem");
static_assert(sizeof(MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem) == 0x000008, "Wrong size on MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem");
static_assert(offsetof(MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem, EntryPoint) == 0x000000, "Member 'MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000004, "Member 'MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem, CallFunc_Greater_FloatFloat_ReturnValue2) == 0x000005, "Member 'MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem::CallFunc_Greater_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem, CallFunc_Greater_FloatFloat_ReturnValue3) == 0x000006, "Member 'MissionModifierItem_C_ExecuteUbergraph_MissionModifierItem::CallFunc_Greater_FloatFloat_ReturnValue3' has a wrong offset!");

// Function MissionModifierItem.MissionModifierItem_C.Update
// 0x0080 (0x0080 - 0x0000)
struct MissionModifierItem_C_Update final
{
public:
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x0000(0x0078)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionModifierItem_C_Update) == 0x000008, "Wrong alignment on MissionModifierItem_C_Update");
static_assert(sizeof(MissionModifierItem_C_Update) == 0x000080, "Wrong size on MissionModifierItem_C_Update");
static_assert(offsetof(MissionModifierItem_C_Update, CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue) == 0x000000, "Member 'MissionModifierItem_C_Update::CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_Update, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'MissionModifierItem_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MissionModifierItem.MissionModifierItem_C.GetToolTipWidget
// 0x0048 (0x0048 - 0x0000)
struct MissionModifierItem_C_GetToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_GetSingleLineDescription_ReturnValue;     // 0x0028(0x0018)()
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MissionModifierItem_C_GetToolTipWidget) == 0x000008, "Wrong alignment on MissionModifierItem_C_GetToolTipWidget");
static_assert(sizeof(MissionModifierItem_C_GetToolTipWidget) == 0x000048, "Wrong size on MissionModifierItem_C_GetToolTipWidget");
static_assert(offsetof(MissionModifierItem_C_GetToolTipWidget, ReturnValue) == 0x000000, "Member 'MissionModifierItem_C_GetToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_GetToolTipWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'MissionModifierItem_C_GetToolTipWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_GetToolTipWidget, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'MissionModifierItem_C_GetToolTipWidget::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_GetToolTipWidget, CallFunc_GetSingleLineDescription_ReturnValue) == 0x000028, "Member 'MissionModifierItem_C_GetToolTipWidget::CallFunc_GetSingleLineDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionModifierItem_C_GetToolTipWidget, CallFunc_Create_Basic_Tooltip_Output) == 0x000040, "Member 'MissionModifierItem_C_GetToolTipWidget::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

}

