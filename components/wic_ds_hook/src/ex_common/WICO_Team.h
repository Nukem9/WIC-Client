#pragma once

#include "../mcommon2/MC_GrowingArray.h"
#include "../ice/Ice.h"
#include "EXCO_LOSSet.h"

#pragma pack(push, 1)
class WICO_Team 
{
public:
	enum AllowedTeam : int
	{
		Team1,
		Team2,
		TeamNone,
	};

	class Team
	{
	public:
		const wchar_t	*myName;		 // this+0x0
		const Ice		*myOrderIcons;		 // this+0x4
		const char		*myZoneFlagBigAnimationState;		 // this+0x8
		const char		*myZoneFlagSmallAnimationState;		 // this+0xC
		const char		*myIconPrefab;		 // this+0x10
		const char		*myIconFlagPrefab;		 // this+0x14
		const char		*myWinScreenBackgroundFile;		 // this+0x18
		unsigned int	myScore;		 // this+0x1C
		unsigned int	myKills;		 // this+0x20
		EXCO_LOSSet		myLOSSet;		 // this+0x24
		int				myTeamID;		 // this+0x30
		const Ice		*myTeamDefinition;		 // this+0x34
		int				myESLFreeRolePlayerId;		 // this+0x38
	};

private:
	int						myAllowedTeams[2];	// this+0x0
	MC_GrowingArray<Team *>	myTeams;			// this+0x8

public:
	AllowedTeam GetAllowedTeamForTeam(const int aTeam)
	{
		if (this->myAllowedTeams[0] == aTeam)
			return Team1;
		else if (this->myAllowedTeams[1] == aTeam)
			return Team2;

		return TeamNone;
	}
};
#pragma pack(pop)