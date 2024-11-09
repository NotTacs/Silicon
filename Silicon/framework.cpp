#include "framework.h"

MH_STATUS Hooks::CreateHook(uintptr_t Address, PVOID Hook, void** OG) {
	return MH_CreateHook((LPVOID)Address, Hook, OG);
}

UWorld* Addresses::GetWorld() {
	return GEngine->GameViewport->World;
}

void Hooks::VFTHook(void** VFT, int IamTired, PVOID Hook, void** OG) {
	
	if (OG) {
		*OG = VFT[IamTired];
	}
	
	DWORD Protect;
	VirtualProtect(VFT + IamTired, 8, 0x40, &Protect);
	VFT[IamTired] = Hook;
	VirtualProtect(VFT + IamTired, 8, Protect, &Protect);
}

