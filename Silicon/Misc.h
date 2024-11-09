#pragma once
#include "framework.h"

namespace Patches {
	int retonehook();
	int retzerohook();
	bool rettruehook();
	bool retfalsehook();
}

namespace StupidAssFunctions {
	inline void (*ApplyHomeBaseEffectsOnPlayerSetup_OG)(AFortGameStateAthena* a1, __int64 a2, __int64 a3, __int64 a4, UFortHero* a5, char a6, unsigned __int8 a7);
	void ApplyHomeBaseEffectsOnPlayerSetup(AFortGameStateAthena* a1, __int64 a2, UFortMcpProfileAccount* a3, __int64 a4, UFortHero* a5, char a6, unsigned __int8 a7);
}