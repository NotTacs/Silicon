#include "Misc.h"

int Patches::retonehook() {
	return 1;
}
int Patches::retzerohook() {
	return 0;
}

bool Patches::rettruehook() {
	return true;
}

bool Patches::retfalsehook() {
	return false;
}

void StupidAssFunctions::ApplyHomeBaseEffectsOnPlayerSetup(AFortGameStateAthena* a1, __int64 a2, UFortMcpProfileAccount* a3,__int64 a4, UFortHero* a5, char a6, unsigned __int8 a7)
{
	auto a2Cast = (UObject*)a2;
	auto a3Cast = (UObject*)a3;
	auto a4Cast = (UObject*)a5;

	if (a4Cast && a4Cast->VTable) {
		std::cout << "0x" << std::hex << __int64(a4Cast->VTable) - ImageBase << std::endl;
	}

	std::cout << "HeroTypeBefore: " << a5->ItemDefinition->GetName() << std::endl; //HID_Commando_GrenadeGun_UC_T01

	a5->ItemDefinition = Utils::StaticLoadObject<UFortHeroType>("/Game/Athena/Heroes/HID_001_Athena_Commando_F.HID_001_Athena_Commando_F");

	std::cout << "HeroTypeAfter: " << a5->ItemDefinition->GetName() << std::endl; 

	return StupidAssFunctions::ApplyHomeBaseEffectsOnPlayerSetup_OG(a1, a2, (__int64)a3, a4, a5, a6, a7);
}