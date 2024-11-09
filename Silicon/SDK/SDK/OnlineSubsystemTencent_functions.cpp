#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemTencent

#include "Basic.hpp"

#include "OnlineSubsystemTencent_classes.hpp"
#include "OnlineSubsystemTencent_parameters.hpp"


namespace SDK
{

// Function OnlineSubsystemTencent.TssAntiComponent.ClientHandleDataFromServer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<uint8>                           Data                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTssAntiComponent::ClientHandleDataFromServer(const TArray<uint8>& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TssAntiComponent", "ClientHandleDataFromServer");

	Params::TssAntiComponent_ClientHandleDataFromServer Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemTencent.TssAntiComponent.ClientPlayerLogin
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void UTssAntiComponent::ClientPlayerLogin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TssAntiComponent", "ClientPlayerLogin");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function OnlineSubsystemTencent.TssAntiComponent.ServerHandleDataFromClient
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<uint8>                           Data                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTssAntiComponent::ServerHandleDataFromClient(const TArray<uint8>& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TssAntiComponent", "ServerHandleDataFromClient");

	Params::TssAntiComponent_ServerHandleDataFromClient Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

