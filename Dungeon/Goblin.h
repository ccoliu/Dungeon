#pragma once
#include "Enemy.h"
#include <stdlib.h>
#include <time.h>

class Goblin : public Enemy
{
	public:
	Goblin(int Height, int Width, int Layer);
	void moveEnemy() override;
};