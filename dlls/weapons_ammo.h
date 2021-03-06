
#ifndef WEAPONS_AMMO_H
#define WEAPONS_AMMO_H
#ifdef _WIN32
#pragma once
#endif

/*
#define AMMO_9MM_GIVE 30
#define AMMO_BUCKSHOT_GIVE 8
#define AMMO_556NATO_GIVE 30
#define AMMO_556NATOBOX_GIVE 30
#define AMMO_762NATO_GIVE 30
#define AMMO_45ACP_GIVE 12
#define AMMO_50AE_GIVE 7
#define AMMO_338MAGNUM_GIVE 10
#define AMMO_57MM_GIVE 50
#define AMMO_357SIG_GIVE 13
*/

enum AmmoType
{
	AMMO_BUCKSHOT,
	AMMO_9MM,
	AMMO_556NATO,
	AMMO_556NATOBOX,
	AMMO_762NATO,
	AMMO_45ACP,
	AMMO_50AE,
	AMMO_338MAGNUM,
	AMMO_57MM,
	AMMO_357SIG,
	AMMO_MAX_TYPES,
};

enum MaxAmmoType
{
	MAX_AMMO_BUCKSHOT = 32,
	MAX_AMMO_9MM = 120,
	MAX_AMMO_556NATO = 90,
	MAX_AMMO_556NATOBOX = 200,
	MAX_AMMO_762NATO = 90,
	MAX_AMMO_45ACP = 100,
	MAX_AMMO_50AE = 35,
	MAX_AMMO_338MAGNUM = 30,
	MAX_AMMO_57MM = 100,
	MAX_AMMO_357SIG = 52,

	// custom
	MAX_AMMO_SMOKEGRENADE = 1,
	MAX_AMMO_HEGRENADE = 1,
	MAX_AMMO_FLASHBANG = 2,
};

#define _9MM_MAX_CARRY MAX_AMMO_9MM
#define BUCKSHOT_MAX_CARRY MAX_AMMO_BUCKSHOT
#define _556NATO_MAX_CARRY MAX_AMMO_556NATO
#define _556NATOBOX_MAX_CARRY MAX_AMMO_556NATOBOX
#define _762NATO_MAX_CARRY MAX_AMMO_762NATO
#define _45ACP_MAX_CARRY MAX_AMMO_45ACP
#define _50AE_MAX_CARRY MAX_AMMO_50AE
#define _338MAGNUM_MAX_CARRY MAX_AMMO_338MAGNUM
#define _57MM_MAX_CARRY MAX_AMMO_57MM
#define _357SIG_MAX_CARRY MAX_AMMO_357SIG

#define HEGRENADE_MAX_CARRY 1
#define FLASHBANG_MAX_CARRY 2
#define SMOKEGRENADE_MAX_CARRY 1
#define C4_MAX_CARRY 1

#endif
