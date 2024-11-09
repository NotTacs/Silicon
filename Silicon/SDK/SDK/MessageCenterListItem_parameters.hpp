#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageCenterListItem

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MessageCenterListItem.MessageCenterListItem_C.ExecuteUbergraph_MessageCenterListItem
// 0x0040 (0x0040 - 0x0000)
struct MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUserWidget* Widget)>    K2Node_Event_Callback;                             // 0x0008(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bExpanded;                            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InIndexInList;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_InData;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        K2Node_Event_OwningList;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINotification*                    K2Node_DynamicCast_AsFort_UINotification;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSelected;                            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem) == 0x000008, "Wrong alignment on MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem");
static_assert(sizeof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem) == 0x000040, "Wrong size on MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, EntryPoint) == 0x000000, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, Temp_bool_Variable) == 0x000004, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, Temp_byte_Variable) == 0x000005, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, Temp_byte_Variable2) == 0x000006, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_Event_Callback) == 0x000008, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_Event_Callback' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_Event_bExpanded) == 0x000018, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_Event_bExpanded' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_Event_InIndexInList) == 0x00001C, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_Event_InIndexInList' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_Event_InData) == 0x000020, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_Event_OwningList) == 0x000028, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_Event_OwningList' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_DynamicCast_AsFort_UINotification) == 0x000030, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_DynamicCast_AsFort_UINotification' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_Event_bSelected) == 0x000039, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_Event_bSelected' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem, K2Node_Select_Default) == 0x00003A, "Member 'MessageCenterListItem_C_ExecuteUbergraph_MessageCenterListItem::K2Node_Select_Default' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct MessageCenterListItem_C_SetSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MessageCenterListItem_C_SetSelected) == 0x000001, "Wrong alignment on MessageCenterListItem_C_SetSelected");
static_assert(sizeof(MessageCenterListItem_C_SetSelected) == 0x000001, "Wrong size on MessageCenterListItem_C_SetSelected");
static_assert(offsetof(MessageCenterListItem_C_SetSelected, bSelected) == 0x000000, "Member 'MessageCenterListItem_C_SetSelected::bSelected' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.SetData
// 0x0010 (0x0010 - 0x0000)
struct MessageCenterListItem_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonListView*                        OwningList;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MessageCenterListItem_C_SetData) == 0x000008, "Wrong alignment on MessageCenterListItem_C_SetData");
static_assert(sizeof(MessageCenterListItem_C_SetData) == 0x000010, "Wrong size on MessageCenterListItem_C_SetData");
static_assert(offsetof(MessageCenterListItem_C_SetData, InData) == 0x000000, "Member 'MessageCenterListItem_C_SetData::InData' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_SetData, OwningList) == 0x000008, "Member 'MessageCenterListItem_C_SetData::OwningList' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.SetIndexInList
// 0x0004 (0x0004 - 0x0000)
struct MessageCenterListItem_C_SetIndexInList final
{
public:
	int32                                         InIndexInList;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MessageCenterListItem_C_SetIndexInList) == 0x000004, "Wrong alignment on MessageCenterListItem_C_SetIndexInList");
static_assert(sizeof(MessageCenterListItem_C_SetIndexInList) == 0x000004, "Wrong size on MessageCenterListItem_C_SetIndexInList");
static_assert(offsetof(MessageCenterListItem_C_SetIndexInList, InIndexInList) == 0x000000, "Member 'MessageCenterListItem_C_SetIndexInList::InIndexInList' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.SetExpanded
// 0x0001 (0x0001 - 0x0000)
struct MessageCenterListItem_C_SetExpanded final
{
public:
	bool                                          bExpanded;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MessageCenterListItem_C_SetExpanded) == 0x000001, "Wrong alignment on MessageCenterListItem_C_SetExpanded");
static_assert(sizeof(MessageCenterListItem_C_SetExpanded) == 0x000001, "Wrong size on MessageCenterListItem_C_SetExpanded");
static_assert(offsetof(MessageCenterListItem_C_SetExpanded, bExpanded) == 0x000000, "Member 'MessageCenterListItem_C_SetExpanded::bExpanded' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.RegisterOnClicked
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) MessageCenterListItem_C_RegisterOnClicked final
{
public:
	TDelegate<void(class UUserWidget* Widget)>    Callback;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};
static_assert(alignof(MessageCenterListItem_C_RegisterOnClicked) == 0x000008, "Wrong alignment on MessageCenterListItem_C_RegisterOnClicked");
static_assert(sizeof(MessageCenterListItem_C_RegisterOnClicked) == 0x000010, "Wrong size on MessageCenterListItem_C_RegisterOnClicked");
static_assert(offsetof(MessageCenterListItem_C_RegisterOnClicked, Callback) == 0x000000, "Member 'MessageCenterListItem_C_RegisterOnClicked::Callback' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.SetMessage
// 0x0008 (0x0008 - 0x0000)
struct MessageCenterListItem_C_SetMessage final
{
public:
	class UFortUINotification*                    Param_MESSAGE;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MessageCenterListItem_C_SetMessage) == 0x000008, "Wrong alignment on MessageCenterListItem_C_SetMessage");
static_assert(sizeof(MessageCenterListItem_C_SetMessage) == 0x000008, "Wrong size on MessageCenterListItem_C_SetMessage");
static_assert(offsetof(MessageCenterListItem_C_SetMessage, Param_MESSAGE) == 0x000000, "Member 'MessageCenterListItem_C_SetMessage::Param_MESSAGE' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.ShowText
// 0x0048 (0x0048 - 0x0000)
struct MessageCenterListItem_C_ShowText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                       TextBlock;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       LocalTextBlock;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalText;                                         // 0x0028(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MessageCenterListItem_C_ShowText) == 0x000008, "Wrong alignment on MessageCenterListItem_C_ShowText");
static_assert(sizeof(MessageCenterListItem_C_ShowText) == 0x000048, "Wrong size on MessageCenterListItem_C_ShowText");
static_assert(offsetof(MessageCenterListItem_C_ShowText, Text) == 0x000000, "Member 'MessageCenterListItem_C_ShowText::Text' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ShowText, TextBlock) == 0x000018, "Member 'MessageCenterListItem_C_ShowText::TextBlock' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ShowText, LocalTextBlock) == 0x000020, "Member 'MessageCenterListItem_C_ShowText::LocalTextBlock' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ShowText, LocalText) == 0x000028, "Member 'MessageCenterListItem_C_ShowText::LocalText' has a wrong offset!");
static_assert(offsetof(MessageCenterListItem_C_ShowText, CallFunc_TextIsEmpty_ReturnValue) == 0x000040, "Member 'MessageCenterListItem_C_ShowText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.GetData
// 0x0008 (0x0008 - 0x0000)
struct MessageCenterListItem_C_GetData final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MessageCenterListItem_C_GetData) == 0x000008, "Wrong alignment on MessageCenterListItem_C_GetData");
static_assert(sizeof(MessageCenterListItem_C_GetData) == 0x000008, "Wrong size on MessageCenterListItem_C_GetData");
static_assert(offsetof(MessageCenterListItem_C_GetData, ReturnValue) == 0x000000, "Member 'MessageCenterListItem_C_GetData::ReturnValue' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.IsItemExpanded
// 0x0001 (0x0001 - 0x0000)
struct MessageCenterListItem_C_IsItemExpanded final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MessageCenterListItem_C_IsItemExpanded) == 0x000001, "Wrong alignment on MessageCenterListItem_C_IsItemExpanded");
static_assert(sizeof(MessageCenterListItem_C_IsItemExpanded) == 0x000001, "Wrong size on MessageCenterListItem_C_IsItemExpanded");
static_assert(offsetof(MessageCenterListItem_C_IsItemExpanded, ReturnValue) == 0x000000, "Member 'MessageCenterListItem_C_IsItemExpanded::ReturnValue' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.DoesItemHaveChildren
// 0x0004 (0x0004 - 0x0000)
struct MessageCenterListItem_C_DoesItemHaveChildren final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MessageCenterListItem_C_DoesItemHaveChildren) == 0x000004, "Wrong alignment on MessageCenterListItem_C_DoesItemHaveChildren");
static_assert(sizeof(MessageCenterListItem_C_DoesItemHaveChildren) == 0x000004, "Wrong size on MessageCenterListItem_C_DoesItemHaveChildren");
static_assert(offsetof(MessageCenterListItem_C_DoesItemHaveChildren, ReturnValue) == 0x000000, "Member 'MessageCenterListItem_C_DoesItemHaveChildren::ReturnValue' has a wrong offset!");

// Function MessageCenterListItem.MessageCenterListItem_C.GetIndentLevel
// 0x0004 (0x0004 - 0x0000)
struct MessageCenterListItem_C_GetIndentLevel final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MessageCenterListItem_C_GetIndentLevel) == 0x000004, "Wrong alignment on MessageCenterListItem_C_GetIndentLevel");
static_assert(sizeof(MessageCenterListItem_C_GetIndentLevel) == 0x000004, "Wrong size on MessageCenterListItem_C_GetIndentLevel");
static_assert(offsetof(MessageCenterListItem_C_GetIndentLevel, ReturnValue) == 0x000000, "Member 'MessageCenterListItem_C_GetIndentLevel::ReturnValue' has a wrong offset!");

}

