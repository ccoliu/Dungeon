#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero()
{
	heroPos = Position(1, 1);
	int maxhealth = 100;
	int health = 100;
	int attack = 10;
	int exp = 0;
	int needexp = 100;
	int level = 1;
}

void Hero::getHit(int damage)
{
	health -= damage;
	if (health <= 0)
	{
		cout << "You died!" << endl;
		system("pause");
		exit(0);
	}
}

void Hero::levelUp()
{
	level++;
	maxhealth += 10;
	health = maxhealth;
	attack += 2;
	needexp += 100;
	exp = 0;
}

void Hero::setHealth(int health)
{
	if (health > maxhealth)
		this->health = maxhealth;
	else
		this->health = health;
}

void Hero::setAttack(int attack)
{
	this->attack = attack;
}