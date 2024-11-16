#pragma once
#include "framework.h"

namespace GameMode {
	inline bool (*ReadyToStartMatchOriginal)(AFortGameModeAthena* GameMode);
	bool ReadyToStartMatch_Hook(AFortGameModeAthena* GameMode);

	APawn* SpawnDefaultPawnFor(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* Controller, AActor* StartSpot);

	inline void (*HandleStartingNewPlayer_OG)(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* Controller);
	void HandleStartingNewPlayer(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* Controller);
	

	inline std::vector<std::pair<EFortTeam, int>> Teams;


	inline EFortAthenaPlaylist GetPlaylistFromGameMode(AFortGameModeAthena* GameMode) {
		AFortGameStateAthena* GameState = GameMode->GameState->Cast<AFortGameStateAthena*>();

		auto PID = GameMode->CurrentPlaylistId; //UMmmmm

		switch (PID) {
		case 2:
			return EFortAthenaPlaylist::AthenaSolo;
		case 10:
			return EFortAthenaPlaylist::AthenaDuo;
		case 9:
			return EFortAthenaPlaylist::AthenaSquad;
		}

		return EFortAthenaPlaylist::AthenaSolo;
	}

	__int64 PickTeamHook(AFortGameModeAthena* GameMode, unsigned int a2, __int64 a3);
}