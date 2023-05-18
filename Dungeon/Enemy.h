#pragma once
#include "Position.h"
#include "Hero.h"

class Enemy
{
protected:
	Position enemyPos;
	Hero* hero;
	int health;
	int attack;
	char enemySymbol;
	int WIDTH;
	int HEIGHT;
	int LAYER = 1;
	friend class Position;
public:
	Enemy(int Height, int Width, int Layer) : HEIGHT(Height), WIDTH(Width), LAYER(Layer) {};
	int getHealth() const { return health; };
	int getAttack() const { return attack; };
	void attackHero() { hero->getHit(attack); };
	virtual void moveEnemy() = 0;
};