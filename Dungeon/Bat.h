#pragma once
#include "Enemy.h"
#include <stdlib.h>
#include <time.h>

class Bat : public Enemy
{
public:
	Bat(int Height, int Width,int Layer);
	void moveEnemy() override;
};