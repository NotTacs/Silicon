#pragma once
#include "framework.h"

namespace Pawn {
	inline void (*ServerHandlePickup_OG)(AFortPlayerPawnAthena* pawn, class AFortPickup* Pickup, float InFlyTime, const struct FVector& InStartDirection, bool bPlayPickupSound);
	void ServerHandlePickup(AFortPlayerPawnAthena* Pawn, class AFortPickup* Pickup, float InFlyTime, const struct FVector& InStartDirection, bool bPlayPickupSound);
}
