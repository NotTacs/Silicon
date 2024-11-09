#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDMinusTeamMemberInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
// 0x0004 (0x0004 - 0x0000)
struct HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo) == 0x000004, "Wrong alignment on HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo");
static_assert(sizeof(HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo) == 0x000004, "Wrong size on HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo, EntryPoint) == 0x000000, "Member 'HUDMinusTeamMemberInfo_C_ExecuteUbergraph_HUDMinusTeamMemberInfo::EntryPoint' has a wrong offset!");

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
// 0x0270 (0x0270 - 0x0000)
struct HUDMinusTeamMemberInfo_C_Update final
{
public:
	struct FFortTeamMemberInfo                    UpdatedMemberInfo;                                 // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FUniqueNetIdRepl                       PlayerPlatformNetId;                               // 0x01A8(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       PlayerNetId;                                       // 0x01D0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x01FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FD[0x3];                                      // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable2;                                // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_UniqueNetIdRepl_ReturnValue;      // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable3;                               // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable4;                               // 0x020B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable2;                              // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInLocalPlayersParty_ReturnValue;        // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable5;                               // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22A[0x6];                                      // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       K2Node_Select_Default;                             // 0x0230(0x0028)(HasGetValueTypeHash)
	class UClass*                                 K2Node_Select2_Default;                            // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select3_Default;                            // 0x0266(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_267[0x1];                                      // 0x0267(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select4_Default;                            // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x026D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue2;                  // 0x026E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select5_Default;                            // 0x026F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUDMinusTeamMemberInfo_C_Update) == 0x000008, "Wrong alignment on HUDMinusTeamMemberInfo_C_Update");
static_assert(sizeof(HUDMinusTeamMemberInfo_C_Update) == 0x000270, "Wrong size on HUDMinusTeamMemberInfo_C_Update");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, UpdatedMemberInfo) == 0x000000, "Member 'HUDMinusTeamMemberInfo_C_Update::UpdatedMemberInfo' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, PlayerPlatformNetId) == 0x0001A8, "Member 'HUDMinusTeamMemberInfo_C_Update::PlayerPlatformNetId' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, PlayerNetId) == 0x0001D0, "Member 'HUDMinusTeamMemberInfo_C_Update::PlayerNetId' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_byte_Variable) == 0x0001F8, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_bool_Variable) == 0x0001F9, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_byte_Variable2) == 0x0001FA, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_byte_Variable3) == 0x0001FB, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_bool_Variable2) == 0x0001FC, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_int_Variable) == 0x000200, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_int_Variable2) == 0x000204, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_byte_Variable4) == 0x000208, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_IsValid_UniqueNetIdRepl_ReturnValue) == 0x000209, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_IsValid_UniqueNetIdRepl_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_bool_Variable3) == 0x00020A, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_bool_Variable4) == 0x00020B, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_bool_Variable4' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_GetContext_ReturnValue) == 0x000210, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_class_Variable) == 0x000218, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_class_Variable2) == 0x000220, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_class_Variable2' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_IsInLocalPlayersParty_ReturnValue) == 0x000228, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_IsInLocalPlayersParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, Temp_bool_Variable5) == 0x000229, "Member 'HUDMinusTeamMemberInfo_C_Update::Temp_bool_Variable5' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, K2Node_Select_Default) == 0x000230, "Member 'HUDMinusTeamMemberInfo_C_Update::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, K2Node_Select2_Default) == 0x000258, "Member 'HUDMinusTeamMemberInfo_C_Update::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000260, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000264, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_IsValid_ReturnValue) == 0x000265, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, K2Node_Select3_Default) == 0x000266, "Member 'HUDMinusTeamMemberInfo_C_Update::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, K2Node_Select4_Default) == 0x000268, "Member 'HUDMinusTeamMemberInfo_C_Update::K2Node_Select4_Default' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_Greater_IntInt_ReturnValue) == 0x00026C, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_BooleanAND_ReturnValue) == 0x00026D, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, CallFunc_BooleanAND_ReturnValue2) == 0x00026E, "Member 'HUDMinusTeamMemberInfo_C_Update::CallFunc_BooleanAND_ReturnValue2' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_Update, K2Node_Select5_Default) == 0x00026F, "Member 'HUDMinusTeamMemberInfo_C_Update::K2Node_Select5_Default' has a wrong offset!");

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
// 0x0010 (0x0010 - 0x0000)
struct HUDMinusTeamMemberInfo_C_SetHealth final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HUDMinusTeamMemberInfo_C_SetHealth) == 0x000008, "Wrong alignment on HUDMinusTeamMemberInfo_C_SetHealth");
static_assert(sizeof(HUDMinusTeamMemberInfo_C_SetHealth) == 0x000010, "Wrong size on HUDMinusTeamMemberInfo_C_SetHealth");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_SetHealth, Value) == 0x000000, "Member 'HUDMinusTeamMemberInfo_C_SetHealth::Value' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_SetHealth, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000004, "Member 'HUDMinusTeamMemberInfo_C_SetHealth::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUDMinusTeamMemberInfo_C_SetHealth, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'HUDMinusTeamMemberInfo_C_SetHealth::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

