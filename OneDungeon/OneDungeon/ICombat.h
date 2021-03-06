#pragma once
#ifndef ICOMBAT_H
#define ICOMBAT_H

#include "IPlayer.h"
#include "IMonster.h"

class ICombat
{
public:
	virtual ~ICombat() {};

	bool virtual initCombat(IPlayer* player, IMonster* enemy) = 0;
};

#endif
