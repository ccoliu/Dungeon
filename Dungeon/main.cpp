#include <iostream>
#include <vector>
#include "Item.h"
#include "Sword.h"
#include "HealthPotion.h"
using namespace std;

const char WALL = '#';
const char BLANK = ' ';

char map[3][8][8] = { {{BLANK}} };

vector<Item*> items;

int main()
{
	items.push_back(new Sword(8, 8));
	items.push_back(new HealthPotion(8, 8));
	return 0;
}