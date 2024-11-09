#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemAttributesDetailWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bItemChanged2;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bAmmoChanged2;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIngredientsChanged2;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bItemChanged;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bAmmoChanged;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIngredientsChanged;            // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue2;                     // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue3;                     // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue4;                     // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)> K2Node_CreateDelegate_OutputDelegate4;             // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget) == 0x000008, "Wrong alignment on ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget");
static_assert(sizeof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget) == 0x000058, "Wrong size on ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, EntryPoint) == 0x000000, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CustomEvent_bItemChanged2) == 0x000018, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CustomEvent_bItemChanged2' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CustomEvent_bAmmoChanged2) == 0x000019, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CustomEvent_bAmmoChanged2' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CustomEvent_bIngredientsChanged2) == 0x00001A, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CustomEvent_bIngredientsChanged2' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CustomEvent_bItemChanged) == 0x000031, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CustomEvent_bItemChanged' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CustomEvent_bAmmoChanged) == 0x000032, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CustomEvent_bAmmoChanged' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CustomEvent_bIngredientsChanged) == 0x000033, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CustomEvent_bIngredientsChanged' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, CallFunc_IsValid_ReturnValue2) == 0x000034, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::CallFunc_IsValid_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, CallFunc_IsValid_ReturnValue3) == 0x000035, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::CallFunc_IsValid_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, CallFunc_IsValid_ReturnValue4) == 0x000036, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::CallFunc_IsValid_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CreateDelegate_OutputDelegate3) == 0x000038, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget, K2Node_CreateDelegate_OutputDelegate4) == 0x000048, "Member 'ItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget::K2Node_CreateDelegate_OutputDelegate4' has a wrong offset!");

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChanged
// 0x0003 (0x0003 - 0x0000)
struct ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged final
{
public:
	bool                                          bItemChanged;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAmmoChanged;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIngredientsChanged;                               // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged) == 0x000001, "Wrong alignment on ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged");
static_assert(sizeof(ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged) == 0x000003, "Wrong size on ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged");
static_assert(offsetof(ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged, bItemChanged) == 0x000000, "Member 'ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged::bItemChanged' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged, bAmmoChanged) == 0x000001, "Member 'ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged::bAmmoChanged' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged, bIngredientsChanged) == 0x000002, "Member 'ItemAttributesDetailWidget_C_HandleItemToCompareWithChanged::bIngredientsChanged' has a wrong offset!");

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChanged
// 0x0003 (0x0003 - 0x0000)
struct ItemAttributesDetailWidget_C_HandleItemToDetailChanged final
{
public:
	bool                                          bItemChanged;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAmmoChanged;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIngredientsChanged;                               // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemAttributesDetailWidget_C_HandleItemToDetailChanged) == 0x000001, "Wrong alignment on ItemAttributesDetailWidget_C_HandleItemToDetailChanged");
static_assert(sizeof(ItemAttributesDetailWidget_C_HandleItemToDetailChanged) == 0x000003, "Wrong size on ItemAttributesDetailWidget_C_HandleItemToDetailChanged");
static_assert(offsetof(ItemAttributesDetailWidget_C_HandleItemToDetailChanged, bItemChanged) == 0x000000, "Member 'ItemAttributesDetailWidget_C_HandleItemToDetailChanged::bItemChanged' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_HandleItemToDetailChanged, bAmmoChanged) == 0x000001, "Member 'ItemAttributesDetailWidget_C_HandleItemToDetailChanged::bAmmoChanged' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_HandleItemToDetailChanged, bIngredientsChanged) == 0x000002, "Member 'ItemAttributesDetailWidget_C_HandleItemToDetailChanged::bIngredientsChanged' has a wrong offset!");

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets
// 0x0060 (0x0060 - 0x0000)
struct ItemAttributesDetailWidget_C_UpdateItemsForWidgets final
{
public:
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortDisplayAttribute>          CallFunc_GetUpgradeStats_ReturnValue;              // 0x0030(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>          CallFunc_GetTooltipStats_ReturnValue;              // 0x0040(0x0010)(ZeroConstructor, ReferenceParm)
	TArray<struct FFortDisplayAttribute>          CallFunc_GetComparisonStats_ReturnValue;           // 0x0050(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets) == 0x000008, "Wrong alignment on ItemAttributesDetailWidget_C_UpdateItemsForWidgets");
static_assert(sizeof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets) == 0x000060, "Wrong size on ItemAttributesDetailWidget_C_UpdateItemsForWidgets");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_GetContext_ReturnValue2) == 0x000010, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_GetContext_ReturnValue3) == 0x000020, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_SpawnTooltipContextWithSource_ReturnValue) == 0x000028, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_SpawnTooltipContextWithSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_GetUpgradeStats_ReturnValue) == 0x000030, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_GetUpgradeStats_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_GetTooltipStats_ReturnValue) == 0x000040, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_GetTooltipStats_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemAttributesDetailWidget_C_UpdateItemsForWidgets, CallFunc_GetComparisonStats_ReturnValue) == 0x000050, "Member 'ItemAttributesDetailWidget_C_UpdateItemsForWidgets::CallFunc_GetComparisonStats_ReturnValue' has a wrong offset!");

}

