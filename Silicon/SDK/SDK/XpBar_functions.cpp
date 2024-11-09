#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBar

#include "Basic.hpp"

#include "XpBar_classes.hpp"
#include "XpBar_parameters.hpp"


namespace SDK
{

// Function XpBar.XpBar_C.ExecuteUbergraph_XpBar
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBar_C::ExecuteUbergraph_XpBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "ExecuteUbergraph_XpBar");

	Params::XpBar_C_ExecuteUbergraph_XpBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBar.XpBar_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BoostAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBar_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "Xp Boost Changed");

	Params::XpBar_C_Xp_Boost_Changed Parms{};

	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBar.XpBar_C.Account Info Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo           NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpBar_C::Account_Info_Changed(const struct FFortPublicAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "Account Info Changed");

	Params::XpBar_C_Account_Info_Changed Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBar.XpBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpBar.XpBar_C.Update Xp Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo           Account_Info                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpBar_C::Update_Xp_Bar(const struct FFortPublicAccountInfo& Account_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "Update Xp Bar");

	Params::XpBar_C_Update_Xp_Bar Parms{};

	Parms.Account_Info = std::move(Account_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBar.XpBar_C.GetExperienceToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UXpBar_C::GetExperienceToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "GetExperienceToolTipWidget");

	Params::XpBar_C_GetExperienceToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBar.XpBar_C.ScaledBoostBalance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   AmountToLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UXpBar_C::ScaledBoostBalance(int32 AmountToLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "ScaledBoostBalance");

	Params::XpBar_C_ScaledBoostBalance Parms{};

	Parms.AmountToLevel = AmountToLevel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBar.XpBar_C.ScaledRestBalance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   AmountToLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UXpBar_C::ScaledRestBalance(int32 AmountToLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "ScaledRestBalance");

	Params::XpBar_C_ScaledRestBalance Parms{};

	Parms.AmountToLevel = AmountToLevel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBar.XpBar_C.ScaledCommanderBalance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LeveXP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InInt2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UXpBar_C::ScaledCommanderBalance(int32 LeveXP, int32 InInt2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBar_C", "ScaledCommanderBalance");

	Params::XpBar_C_ScaledCommanderBalance Parms{};

	Parms.LeveXP = LeveXP;
	Parms.InInt2 = InInt2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

