#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolveRarityIngredientsList

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.SetIngredients
// 0x0078 (0x0078 - 0x0000)
struct ItemInspectEvolveRarityIngredientsList_C_SetIngredients final
{
public:
	class UFortItem*                              Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>          InIngredients;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemQuantityPair                  CallFunc_Array_Get_Item;                           // 0x0030(0x0030)()
	class UItemInspectEvolutionIngredientsEntry_C* CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients) == 0x000008, "Wrong alignment on ItemInspectEvolveRarityIngredientsList_C_SetIngredients");
static_assert(sizeof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients) == 0x000078, "Wrong size on ItemInspectEvolveRarityIngredientsList_C_SetIngredients");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, Item) == 0x000000, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::Item' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, InIngredients) == 0x000008, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::InIngredients' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, CallFunc_Array_Get_Item) == 0x000030, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, CallFunc_Create_ReturnValue) == 0x000060, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_SetIngredients, CallFunc_AddChild_ReturnValue) == 0x000070, "Member 'ItemInspectEvolveRarityIngredientsList_C_SetIngredients::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.Add XP Cost to Upgrade
// 0x0070 (0x0070 - 0x0000)
struct ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade final
{
public:
	class UFortItem*                              Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevelRelativeCostForRarityUpgrade_ReturnValue; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPersistentResourceItemDefinition*  CallFunc_GetUpgradeResourceItemDefinition_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemQuantityPair                  CallFunc_MakeItemQuantityPair_ReturnValue;         // 0x0030(0x0030)()
	class UItemInspectEvolutionIngredientsEntry_C* CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade) == 0x000008, "Wrong alignment on ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade");
static_assert(sizeof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade) == 0x000070, "Wrong size on ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, Target) == 0x000000, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::Target' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_GetLevelRelativeCostForRarityUpgrade_ReturnValue) == 0x000008, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_GetLevelRelativeCostForRarityUpgrade_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_GetUpgradeResourceItemDefinition_ReturnValue) == 0x000010, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_GetUpgradeResourceItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_GetContext_ReturnValue) == 0x000020, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_MakeItemQuantityPair_ReturnValue) == 0x000030, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_MakeItemQuantityPair_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_Create_ReturnValue) == 0x000060, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade, CallFunc_AddChild_ReturnValue) == 0x000068, "Member 'ItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

