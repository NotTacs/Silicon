#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_PlayerController

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// 0x0050 (0x0050 - 0x0000)
struct Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayerController_ReturnValue;      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0xB];                                        // 0x0005(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class UAmbientControllerComponent_Athena_C*   CallFunc_AddComponent_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController) == 0x000010, "Wrong alignment on Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController");
static_assert(sizeof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController) == 0x000050, "Wrong size on Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, EntryPoint) == 0x000000, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsLocalPlayerController_ReturnValue) == 0x000004, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_struct_Variable) == 0x000010, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_AddComponent_ReturnValue) == 0x000040, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_AddComponent_ReturnValue' has a wrong offset!");

// Function Athena_PlayerController.Athena_PlayerController_C.IsLocalPlayerFriendsWithSquadMember
// 0x01C8 (0x01C8 - 0x0000)
struct Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember final
{
public:
	class AFortPlayerState*                       SquadMember;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo; // 0x0018(0x01A8)()
	bool                                          CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue;   // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTeamMemberFriend_ReturnValue;           // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember) == 0x000008, "Wrong alignment on Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember");
static_assert(sizeof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember) == 0x0001C8, "Wrong size on Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember");
static_assert(offsetof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember, SquadMember) == 0x000000, "Member 'Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember::SquadMember' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember, ReturnValue) == 0x000008, "Member 'Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember::ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember, CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo) == 0x000018, "Member 'Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember::CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember, CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue) == 0x0001C0, "Member 'Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember::CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember, CallFunc_IsTeamMemberFriend_ReturnValue) == 0x0001C1, "Member 'Athena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember::CallFunc_IsTeamMemberFriend_ReturnValue' has a wrong offset!");

}

