#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_Lights

#include "Basic.hpp"


namespace SDK::Params
{

// Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
// 0x0008 (0x0008 - 0x0000)
struct WM_Lights_C_ExecuteUbergraph_WM_Lights final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_TurnOn;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Lights_C_ExecuteUbergraph_WM_Lights) == 0x000004, "Wrong alignment on WM_Lights_C_ExecuteUbergraph_WM_Lights");
static_assert(sizeof(WM_Lights_C_ExecuteUbergraph_WM_Lights) == 0x000008, "Wrong size on WM_Lights_C_ExecuteUbergraph_WM_Lights");
static_assert(offsetof(WM_Lights_C_ExecuteUbergraph_WM_Lights, EntryPoint) == 0x000000, "Member 'WM_Lights_C_ExecuteUbergraph_WM_Lights::EntryPoint' has a wrong offset!");
static_assert(offsetof(WM_Lights_C_ExecuteUbergraph_WM_Lights, K2Node_CustomEvent_TurnOn) == 0x000004, "Member 'WM_Lights_C_ExecuteUbergraph_WM_Lights::K2Node_CustomEvent_TurnOn' has a wrong offset!");

// Function WM_Lights.WM_Lights_C.WM-Lightcontrol
// 0x0001 (0x0001 - 0x0000)
struct WM_Lights_C_WMMinusLightcontrol final
{
public:
	bool                                          TurnOn;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WM_Lights_C_WMMinusLightcontrol) == 0x000001, "Wrong alignment on WM_Lights_C_WMMinusLightcontrol");
static_assert(sizeof(WM_Lights_C_WMMinusLightcontrol) == 0x000001, "Wrong size on WM_Lights_C_WMMinusLightcontrol");
static_assert(offsetof(WM_Lights_C_WMMinusLightcontrol, TurnOn) == 0x000000, "Member 'WM_Lights_C_WMMinusLightcontrol::TurnOn' has a wrong offset!");

}

