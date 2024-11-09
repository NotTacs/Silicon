#pragma once
#include "framework.h"

namespace Controller {
	void ServerExecuteInventoryItem(AFortPlayerControllerAthena* Controller, FGuid Guid);
	inline void (*ServerReadyToStartMatch_OG)(AFortPlayerControllerAthena* Controller);
	void ServerReadyToStartMatch(AFortPlayerControllerAthena* Controller);
	inline void (*ServerAcknowledgePossesion_OG)(AFortPlayerControllerAthena*, AFortPawn*);
	void ServerAcknowledgePossession(AFortPlayerControllerAthena* Controller, AFortPawn* P);

	inline void (*ClientOnPawnDied_OG)(AFortPlayerControllerAthena* Controller, FFortPlayerDeathReport& DeathReport);
	void ClientOnPawnDied(AFortPlayerControllerAthena* Controller, FFortPlayerDeathReport& DeathReport);
}