
#ifndef MOD_ZBS_H
#define MOD_ZBS_H
#ifdef _WIN32
#pragma once
#endif

#include "mod_base.h"
#include <vector>

class CZombieSpawn;

class CMod_ZombieScenario : public IBaseMod_RemoveObjects
{
public:
	CMod_ZombieScenario();

public: // CHalfLifeMultiplay
	BOOL IsTeamplay(void) override { return TRUE; }
	void UpdateGameMode(CBasePlayer *pPlayer) override;
	void RestartRound() override;
	void Think() override;
	void CheckWinConditions() override;
	void CheckMapConditions() override;

public:
	DamageTrack_e DamageTrack() override { return DT_ZBS; }
	bool CanPlayerBuy(CBasePlayer *player, bool display) override;

public:
	void TeamCheck();
	void RoundStart();
	void HumanWin();
	void ZombieWin();
	BOOL FRoundStarted();

	CZombieSpawn *SelectZombieSpawnPoint();
	CBaseEntity *MakeZombieNPC();
	void ClearZombieNPC();

	

public:
	std::vector<CZombieSpawn *> m_vecZombieSpawns;
	float m_flNextSpawnNPC;
};

#endif
