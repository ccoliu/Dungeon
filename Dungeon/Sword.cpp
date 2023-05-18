#include "Sword.h"

Sword::Sword(int Height, int Width) : Item(Height, Width)
{
	itemSymbol = '!';
	boostHP = 0;
	boostAttack = 4;
	itemPos.x = 0;
	itemPos.y = HEIGHT - 1;
}

void Sword::useItem()
{
	hero->setAttack(hero->getAttack() + boostAttack);
}