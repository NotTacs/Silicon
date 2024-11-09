#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemWindow

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ItemWindow.ItemWindow_C.ExecuteUbergraph_ItemWindow
// 0x0080 (0x0080 - 0x0000)
struct ItemWindow_C_ExecuteUbergraph_ItemWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonButton* AssociatedButton, int32 ButtonIndex)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_AssociatedButton;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ButtonIndex;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue2;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue3;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue4;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue5;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinitionBP_ReturnValue6;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemWindow_C_ExecuteUbergraph_ItemWindow) == 0x000008, "Wrong alignment on ItemWindow_C_ExecuteUbergraph_ItemWindow");
static_assert(sizeof(ItemWindow_C_ExecuteUbergraph_ItemWindow) == 0x000080, "Wrong size on ItemWindow_C_ExecuteUbergraph_ItemWindow");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, EntryPoint) == 0x000000, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000018, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, K2Node_CustomEvent_AssociatedButton) == 0x000020, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::K2Node_CustomEvent_AssociatedButton' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, K2Node_CustomEvent_ButtonIndex) == 0x000028, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::K2Node_CustomEvent_ButtonIndex' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_Array_Get_Item) == 0x000030, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x000038, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetType_ReturnValue) == 0x000040, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, K2Node_SwitchEnum_CmpSuccess) == 0x000042, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetItemDefinitionBP_ReturnValue) == 0x000048, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetItemDefinitionBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetItemDefinitionBP_ReturnValue2) == 0x000050, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetItemDefinitionBP_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, K2Node_ComponentBoundEvent_Button) == 0x000058, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetItemDefinitionBP_ReturnValue3) == 0x000060, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetItemDefinitionBP_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetItemDefinitionBP_ReturnValue4) == 0x000068, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetItemDefinitionBP_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetItemDefinitionBP_ReturnValue5) == 0x000070, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetItemDefinitionBP_ReturnValue5' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_ExecuteUbergraph_ItemWindow, CallFunc_GetItemDefinitionBP_ReturnValue6) == 0x000078, "Member 'ItemWindow_C_ExecuteUbergraph_ItemWindow::CallFunc_GetItemDefinitionBP_ReturnValue6' has a wrong offset!");

// Function ItemWindow.ItemWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ItemWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ItemWindow.ItemWindow_C.OnSelectedButtonChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct ItemWindow_C_OnSelectedButtonChanged_Event_0 final
{
public:
	class UCommonButton*                          AssociatedButton;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonIndex;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemWindow_C_OnSelectedButtonChanged_Event_0) == 0x000008, "Wrong alignment on ItemWindow_C_OnSelectedButtonChanged_Event_0");
static_assert(sizeof(ItemWindow_C_OnSelectedButtonChanged_Event_0) == 0x000010, "Wrong size on ItemWindow_C_OnSelectedButtonChanged_Event_0");
static_assert(offsetof(ItemWindow_C_OnSelectedButtonChanged_Event_0, AssociatedButton) == 0x000000, "Member 'ItemWindow_C_OnSelectedButtonChanged_Event_0::AssociatedButton' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_OnSelectedButtonChanged_Event_0, ButtonIndex) == 0x000008, "Member 'ItemWindow_C_OnSelectedButtonChanged_Event_0::ButtonIndex' has a wrong offset!");

// Function ItemWindow.ItemWindow_C.AddInfo
// 0x0348 (0x0348 - 0x0000)
struct ItemWindow_C_AddInfo final
{
public:
	TArray<class UFortItemDefinition*>            Info_Items;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                   Param_Title;                                       // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemEntry_C*                           CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPrimaryCategory_ItemCategoryText;      // 0x00F0(0x0018)()
	bool                                          CallFunc_GetPrimaryCategory_ReturnValue;           // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_InternalToExternalRarity_ExternalRarity;  // 0x0110(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0128(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData3;             // 0x0168(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue2;              // 0x01A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData4;             // 0x01C0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array2;                           // 0x0200(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue2;                      // 0x0210(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue3;              // 0x0228(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData5;             // 0x0240(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array3;                           // 0x0280(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue3;                      // 0x0290(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue4;              // 0x02B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData6;             // 0x02C8(0x0040)(HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array4;                           // 0x0310(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue4;                      // 0x0320(0x0018)()
	bool                                          Temp_bool_Variable2;                               // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339[0x3];                                      // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select2_Default;                            // 0x0342(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemWindow_C_AddInfo) == 0x000008, "Wrong alignment on ItemWindow_C_AddInfo");
static_assert(sizeof(ItemWindow_C_AddInfo) == 0x000348, "Wrong size on ItemWindow_C_AddInfo");
static_assert(offsetof(ItemWindow_C_AddInfo, Info_Items) == 0x000000, "Member 'ItemWindow_C_AddInfo::Info_Items' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Param_Title) == 0x000010, "Member 'ItemWindow_C_AddInfo::Param_Title' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'ItemWindow_C_AddInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetType_ReturnValue) == 0x00002C, "Member 'ItemWindow_C_AddInfo::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_SwitchEnum_CmpSuccess) == 0x00002D, "Member 'ItemWindow_C_AddInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Array_Length_ReturnValue2) == 0x000030, "Member 'ItemWindow_C_AddInfo::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Create_ReturnValue) == 0x000038, "Member 'ItemWindow_C_AddInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'ItemWindow_C_AddInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_int_Array_Index_Variable) == 0x000044, "Member 'ItemWindow_C_AddInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Array_Get_Item) == 0x000048, "Member 'ItemWindow_C_AddInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x000050, "Member 'ItemWindow_C_AddInfo::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'ItemWindow_C_AddInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'ItemWindow_C_AddInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_bool_Variable) == 0x000060, "Member 'ItemWindow_C_AddInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000061, "Member 'ItemWindow_C_AddInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'ItemWindow_C_AddInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetDisplayName_ReturnValue) == 0x000068, "Member 'ItemWindow_C_AddInfo::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'ItemWindow_C_AddInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeArray_Array) == 0x0000C0, "Member 'ItemWindow_C_AddInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'ItemWindow_C_AddInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetRarity_ReturnValue) == 0x0000E8, "Member 'ItemWindow_C_AddInfo::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetPrimaryCategory_ItemCategoryText) == 0x0000F0, "Member 'ItemWindow_C_AddInfo::CallFunc_GetPrimaryCategory_ItemCategoryText' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetPrimaryCategory_ReturnValue) == 0x000108, "Member 'ItemWindow_C_AddInfo::CallFunc_GetPrimaryCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_InternalToExternalRarity_ExternalRarity) == 0x000110, "Member 'ItemWindow_C_AddInfo::CallFunc_InternalToExternalRarity_ExternalRarity' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeStruct_FormatArgumentData2) == 0x000128, "Member 'ItemWindow_C_AddInfo::K2Node_MakeStruct_FormatArgumentData2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeStruct_FormatArgumentData3) == 0x000168, "Member 'ItemWindow_C_AddInfo::K2Node_MakeStruct_FormatArgumentData3' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetDisplayName_ReturnValue2) == 0x0001A8, "Member 'ItemWindow_C_AddInfo::CallFunc_GetDisplayName_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeStruct_FormatArgumentData4) == 0x0001C0, "Member 'ItemWindow_C_AddInfo::K2Node_MakeStruct_FormatArgumentData4' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeArray_Array2) == 0x000200, "Member 'ItemWindow_C_AddInfo::K2Node_MakeArray_Array2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Format_ReturnValue2) == 0x000210, "Member 'ItemWindow_C_AddInfo::CallFunc_Format_ReturnValue2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetDisplayName_ReturnValue3) == 0x000228, "Member 'ItemWindow_C_AddInfo::CallFunc_GetDisplayName_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeStruct_FormatArgumentData5) == 0x000240, "Member 'ItemWindow_C_AddInfo::K2Node_MakeStruct_FormatArgumentData5' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeArray_Array3) == 0x000280, "Member 'ItemWindow_C_AddInfo::K2Node_MakeArray_Array3' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Format_ReturnValue3) == 0x000290, "Member 'ItemWindow_C_AddInfo::CallFunc_Format_ReturnValue3' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_int_Variable) == 0x0002A8, "Member 'ItemWindow_C_AddInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_GetDisplayName_ReturnValue4) == 0x0002B0, "Member 'ItemWindow_C_AddInfo::CallFunc_GetDisplayName_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeStruct_FormatArgumentData6) == 0x0002C8, "Member 'ItemWindow_C_AddInfo::K2Node_MakeStruct_FormatArgumentData6' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_int_Variable2) == 0x000308, "Member 'ItemWindow_C_AddInfo::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_MakeArray_Array4) == 0x000310, "Member 'ItemWindow_C_AddInfo::K2Node_MakeArray_Array4' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, CallFunc_Format_ReturnValue4) == 0x000320, "Member 'ItemWindow_C_AddInfo::CallFunc_Format_ReturnValue4' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_bool_Variable2) == 0x000338, "Member 'ItemWindow_C_AddInfo::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_Select_Default) == 0x00033C, "Member 'ItemWindow_C_AddInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_byte_Variable) == 0x000340, "Member 'ItemWindow_C_AddInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, Temp_byte_Variable2) == 0x000341, "Member 'ItemWindow_C_AddInfo::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_AddInfo, K2Node_Select2_Default) == 0x000342, "Member 'ItemWindow_C_AddInfo::K2Node_Select2_Default' has a wrong offset!");

// Function ItemWindow.ItemWindow_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct ItemWindow_C_Initialize final
{
public:
	class UCommonButtonGroup*                     CallFunc_SpawnObject_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemWindow_C_Initialize) == 0x000008, "Wrong alignment on ItemWindow_C_Initialize");
static_assert(sizeof(ItemWindow_C_Initialize) == 0x000008, "Wrong size on ItemWindow_C_Initialize");
static_assert(offsetof(ItemWindow_C_Initialize, CallFunc_SpawnObject_ReturnValue) == 0x000000, "Member 'ItemWindow_C_Initialize::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function ItemWindow.ItemWindow_C.HandleButton
// 0x0028 (0x0028 - 0x0000)
struct ItemWindow_C_HandleButton final
{
public:
	class UWidget*                                Content;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0020(0x0008)(NoDestructor)
};
static_assert(alignof(ItemWindow_C_HandleButton) == 0x000008, "Wrong alignment on ItemWindow_C_HandleButton");
static_assert(sizeof(ItemWindow_C_HandleButton) == 0x000028, "Wrong size on ItemWindow_C_HandleButton");
static_assert(offsetof(ItemWindow_C_HandleButton, Content) == 0x000000, "Member 'ItemWindow_C_HandleButton::Content' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_HandleButton, Param_Index) == 0x000008, "Member 'ItemWindow_C_HandleButton::Param_Index' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_HandleButton, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'ItemWindow_C_HandleButton::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_HandleButton, CallFunc_GetUINavigationManager_ReturnValue) == 0x000010, "Member 'ItemWindow_C_HandleButton::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_HandleButton, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000018, "Member 'ItemWindow_C_HandleButton::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_HandleButton, K2Node_MakeStruct_SlateChildSize) == 0x000020, "Member 'ItemWindow_C_HandleButton::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");

// Function ItemWindow.ItemWindow_C.InternalToExternalRarity
// 0x0028 (0x0028 - 0x0000)
struct ItemWindow_C_InternalToExternalRarity final
{
public:
	EFortRarity                                   InRarity;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ExternalRarity;                                    // 0x0008(0x0018)(Parm, OutParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemWindow_C_InternalToExternalRarity) == 0x000008, "Wrong alignment on ItemWindow_C_InternalToExternalRarity");
static_assert(sizeof(ItemWindow_C_InternalToExternalRarity) == 0x000028, "Wrong size on ItemWindow_C_InternalToExternalRarity");
static_assert(offsetof(ItemWindow_C_InternalToExternalRarity, InRarity) == 0x000000, "Member 'ItemWindow_C_InternalToExternalRarity::InRarity' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_InternalToExternalRarity, ExternalRarity) == 0x000008, "Member 'ItemWindow_C_InternalToExternalRarity::ExternalRarity' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_InternalToExternalRarity, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'ItemWindow_C_InternalToExternalRarity::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ItemWindow.ItemWindow_C.Set Description Text
// 0x0048 (0x0048 - 0x0000)
struct ItemWindow_C_Set_Description_Text final
{
public:
	class UFortItemDefinition*                    Item_Definition;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Box_to_Set;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContextWithSource_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0028(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemWindow_C_Set_Description_Text) == 0x000008, "Wrong alignment on ItemWindow_C_Set_Description_Text");
static_assert(sizeof(ItemWindow_C_Set_Description_Text) == 0x000048, "Wrong size on ItemWindow_C_Set_Description_Text");
static_assert(offsetof(ItemWindow_C_Set_Description_Text, Item_Definition) == 0x000000, "Member 'ItemWindow_C_Set_Description_Text::Item_Definition' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_Set_Description_Text, Text_Box_to_Set) == 0x000008, "Member 'ItemWindow_C_Set_Description_Text::Text_Box_to_Set' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_Set_Description_Text, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'ItemWindow_C_Set_Description_Text::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_Set_Description_Text, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'ItemWindow_C_Set_Description_Text::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_Set_Description_Text, CallFunc_SpawnTooltipContextWithSource_ReturnValue) == 0x000020, "Member 'ItemWindow_C_Set_Description_Text::CallFunc_SpawnTooltipContextWithSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_Set_Description_Text, CallFunc_GetCombinedDescription_OutDescription) == 0x000028, "Member 'ItemWindow_C_Set_Description_Text::CallFunc_GetCombinedDescription_OutDescription' has a wrong offset!");
static_assert(offsetof(ItemWindow_C_Set_Description_Text, CallFunc_GetCombinedDescription_ReturnValue) == 0x000040, "Member 'ItemWindow_C_Set_Description_Text::CallFunc_GetCombinedDescription_ReturnValue' has a wrong offset!");

}

