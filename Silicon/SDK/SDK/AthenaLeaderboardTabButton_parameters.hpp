#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLeaderboardTabButton

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton
// 0x00B8 (0x00B8 - 0x0000)
struct AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue2;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;                         // 0x0020(0x0090)()
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue2;                 // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton) == 0x000008, "Wrong alignment on AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton");
static_assert(sizeof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton) == 0x0000B8, "Wrong size on AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, EntryPoint) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000008, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetCurrentTextStyleClass_ReturnValue2) == 0x000010, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetCurrentTextStyleClass_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, K2Node_Event_IsDesignTime) == 0x000018, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, K2Node_Event_TabLabelInfo) == 0x000020, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::K2Node_Event_TabLabelInfo' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetSelected_ReturnValue) == 0x0000B0, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton, CallFunc_GetSelected_ReturnValue2) == 0x0000B1, "Member 'AthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton::CallFunc_GetSelected_ReturnValue2' has a wrong offset!");

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo
// 0x0090 (0x0090 - 0x0000)
struct AthenaLeaderboardTabButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;                                      // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AthenaLeaderboardTabButton_C_SetTabLabelInfo) == 0x000008, "Wrong alignment on AthenaLeaderboardTabButton_C_SetTabLabelInfo");
static_assert(sizeof(AthenaLeaderboardTabButton_C_SetTabLabelInfo) == 0x000090, "Wrong size on AthenaLeaderboardTabButton_C_SetTabLabelInfo");
static_assert(offsetof(AthenaLeaderboardTabButton_C_SetTabLabelInfo, TabLabelInfo) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_SetTabLabelInfo::TabLabelInfo' has a wrong offset!");

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaLeaderboardTabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaLeaderboardTabButton_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaLeaderboardTabButton_C_PreConstruct");
static_assert(sizeof(AthenaLeaderboardTabButton_C_PreConstruct) == 0x000001, "Wrong size on AthenaLeaderboardTabButton_C_PreConstruct");
static_assert(offsetof(AthenaLeaderboardTabButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text
// 0x0038 (0x0038 - 0x0000)
struct AthenaLeaderboardTabButton_C_Set_Text final
{
public:
	class FText                                   Param_ButtonText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaLeaderboardTabButton_C_Set_Text) == 0x000008, "Wrong alignment on AthenaLeaderboardTabButton_C_Set_Text");
static_assert(sizeof(AthenaLeaderboardTabButton_C_Set_Text) == 0x000038, "Wrong size on AthenaLeaderboardTabButton_C_Set_Text");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, Param_ButtonText) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_Set_Text::Param_ButtonText' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Text, CallFunc_Create_Basic_Tooltip_Output) == 0x000030, "Member 'AthenaLeaderboardTabButton_C_Set_Text::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon
// 0x0078 (0x0078 - 0x0000)
struct AthenaLeaderboardTabButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            Param_IconBrush;                                   // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(AthenaLeaderboardTabButton_C_Set_Icon) == 0x000008, "Wrong alignment on AthenaLeaderboardTabButton_C_Set_Icon");
static_assert(sizeof(AthenaLeaderboardTabButton_C_Set_Icon) == 0x000078, "Wrong size on AthenaLeaderboardTabButton_C_Set_Icon");
static_assert(offsetof(AthenaLeaderboardTabButton_C_Set_Icon, Param_IconBrush) == 0x000000, "Member 'AthenaLeaderboardTabButton_C_Set_Icon::Param_IconBrush' has a wrong offset!");

}

