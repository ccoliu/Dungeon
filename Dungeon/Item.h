#pragma once
#include "Position.h"

class Item
{
protected:
	friend class Hero;
	Hero* hero;
	Position itemPos;
	int boostHP;
	int boostAttack;
	char itemSymbol;
	int WIDTH;
	int HEIGHT;
public:
	Item(int Height, int Width) : HEIGHT(Height), WIDTH(Width) {};
	virtual void useItem() = 0;
};