#pragma once
#include "Item.h"
#include "Hero.h"

class HealthPotion : public Item
{
	public:
	HealthPotion(int Height, int Width);
	void useItem() override;
};