#include "framework.h"
#include "discord.h"
#include "GameMode.h"
#include "Misc.h"
#include "Driver.h"
#include "Controller.h"
#include "Abilities.h"
#include "Actor.h"
#include "Pawn.h"

DWORD WINAPI Main(LPVOID) {
    AllocConsole();
    FILE* File;
    freopen_s(&File, "CONOUT$", "w+", stdout);
    SetConsoleTitleA("Silicon");
    MH_Initialize();
    Sleep(5000);

    Hooks::CreateHook(ImageBase + 0x1DC0060, GameMode::ReadyToStartMatch_Hook, (void**)&GameMode::ReadyToStartMatchOriginal);
    Hooks::CreateHook(ImageBase + 0x44C200, GameMode::SpawnDefaultPawnFor, nullptr);
    Hooks::CreateHook(ImageBase + 0x1D58B40, Patches::retonehook, nullptr); //UWorld::GetNetMode
    Hooks::CreateHook(ImageBase + 0x74C0B0, Patches::rettruehook, nullptr); //NoReservation
    Hooks::CreateHook(ImageBase + 0x19D6900, Patches::retonehook, nullptr); //KickPlayer
    Hooks::CreateHook(ImageBase + 0x1AF10F0, Driver::TickFlush, (void**)&Driver::TickFlush_OG);
    Hooks::CreateHook(ImageBase + 0xD875A0, Patches::retonehook, nullptr); //CollectGarbage Mabye
    Hooks::CreateHook(ImageBase + 0x5DF2A0, StupidAssFunctions::ApplyHomeBaseEffectsOnPlayerSetup, (void**)&StupidAssFunctions::ApplyHomeBaseEffectsOnPlayerSetup_OG);
    Hooks::CreateHook(ImageBase + 0x9d0c50, Actor::OnDamageServer, (void**)&Actor::OnDamageServer_OG);
    Hooks::CreateHook(ImageBase + 0x444620, GameMode::PickTeamHook, nullptr);

    Hooks::VFTHook(AFortGameModeAthena::GetDefaultObj()->VTable, 0xC5, GameMode::HandleStartingNewPlayer, (void**)&GameMode::HandleStartingNewPlayer_OG);
    Hooks::VFTHook(AFortPlayerControllerAthena::GetDefaultObj()->VTable, 0x1DB, Controller::ServerExecuteInventoryItem, nullptr);
    Hooks::VFTHook(AFortPlayerControllerAthena::GetDefaultObj()->VTable, 0x236, Controller::ServerReadyToStartMatch, (void**)&Controller::ServerReadyToStartMatch_OG);
    Hooks::VFTHook(AFortPlayerControllerAthena::GetDefaultObj()->VTable, 0x102, Controller::ServerAcknowledgePossession, (void**)&Controller::ServerAcknowledgePossesion_OG);

    Hooks::VFTHook(AFortPlayerPawnAthena::GetDefaultObj()->VTable, 0x182, Pawn::ServerHandlePickup, (void**)&Pawn::ServerHandlePickup_OG);


    for (int i = 0; i < UObject::GObjects->Num(); i++) {
        UObject* Object = UObject::GObjects->GetByIndex(i);

        if (!Object) continue;

        if (Object->IsA(UAbilitySystemComponent::StaticClass())) {
            Hooks::VFTHook(Object->VTable, 0x99, Abilities::InternalServerTryActivateAbilityHook, nullptr);
        }
    }

    uintptr_t GIsClientAddr = (ImageBase + 0x5BAA38F);
    *(bool*)GIsClientAddr = false;
    
    uintptr_t GIsServerAddr = ImageBase + 0x5BAA390;
    *(bool*)GIsServerAddr = true;

    MH_EnableHook(MH_ALL_HOOKS);

    UKismetSystemLibrary::ExecuteConsoleCommand(Addresses::GetWorld(), L"open Athena_Terrain", nullptr);
    Addresses::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    return 0;
}

BOOL APIENTRY DllMain( HMODULE hModule,DWORD reason,LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
        break;
    case DLL_PROCESS_DETACH:
        //SendWebhook(Globals::WebhookURL, "Server Restarting");
        break;
    }

    return TRUE;
}

