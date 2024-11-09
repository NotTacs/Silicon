#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerRankEmblem

#include "Basic.hpp"

#include "PlayerRankEmblem_classes.hpp"
#include "PlayerRankEmblem_parameters.hpp"


namespace SDK
{

// Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRankEmblem_C::ExecuteUbergraph_PlayerRankEmblem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "ExecuteUbergraph_PlayerRankEmblem");

	Params::PlayerRankEmblem_C_ExecuteUbergraph_PlayerRankEmblem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRankEmblem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "PreConstruct");

	Params::PlayerRankEmblem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerRankEmblem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRankEmblem_C::SetBannerOwner(class AFortPlayerController* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "SetBannerOwner");

	Params::PlayerRankEmblem_C_SetBannerOwner Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerSurroundLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Animate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRankEmblem_C::SetBannerSurroundLevel(int32 Level, bool Animate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "SetBannerSurroundLevel");

	Params::PlayerRankEmblem_C_SetBannerSurroundLevel Parms{};

	Parms.Level = Level;
	Parms.Animate = Animate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerBannerInfo                Banner                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerRankEmblem_C::SetBannerInfo(const struct FPlayerBannerInfo& Banner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRankEmblem_C", "SetBannerInfo");

	Params::PlayerRankEmblem_C_SetBannerInfo Parms{};

	Parms.Banner = std::move(Banner);

	UObject::ProcessEvent(Func, &Parms);
}

}

