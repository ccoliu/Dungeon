#pragma once
#include "Position.h"

class Hero
{
private:
	Position heroPos;
	int maxhealth;
	int health;
	int attack;
	int exp;
	int needexp;
	int level;
	char heroSymbol = 'H';
public:
	Hero();
	int getHealth() const { return health; };
	int getAttack() const { return attack; };
	int getExp() const { return exp; };
	int getNeedExp() const { return needexp; };
	int getLevel() const { return level; };
	void getHit(int damage);
	void levelUp();
	void setHealth(int health);
	void setAttack(int attack);
	void attackEnemy();
};