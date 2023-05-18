#pragma once
#include "Item.h"
#include "Hero.h"

class Sword : public Item
{
public:
	Sword(int Height, int Width);
	void useItem() override;
};