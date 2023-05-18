#include "HealthPotion.h"
#include <stdlib.h>
#include <time.h>

HealthPotion::HealthPotion(int Height, int Width) : Item(Height, Width)
{
	itemSymbol = '+';
	boostHP = 25;
	boostAttack = 0;
	itemPos.x = rand() % (WIDTH - 1) + 1;
	itemPos.y = rand() % (HEIGHT - 1) + 1;
}

void HealthPotion::useItem()
{
	hero->setHealth(hero->getHealth() + boostHP);
}