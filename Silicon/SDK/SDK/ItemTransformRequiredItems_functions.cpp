#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformRequiredItems

#include "Basic.hpp"

#include "ItemTransformRequiredItems_classes.hpp"
#include "ItemTransformRequiredItems_parameters.hpp"


namespace SDK
{

// Function ItemTransformRequiredItems.ItemTransformRequiredItems_C.UpdateItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        TransformKey                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SacrificePoints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformRequiredItems_C::UpdateItems(class UFortItem* TransformKey, int32 SacrificePoints)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformRequiredItems_C", "UpdateItems");

	Params::ItemTransformRequiredItems_C_UpdateItems Parms{};

	Parms.TransformKey = TransformKey;
	Parms.SacrificePoints = SacrificePoints;

	UObject::ProcessEvent(Func, &Parms);
}

}

