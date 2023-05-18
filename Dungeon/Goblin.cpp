#include "Goblin.h"

Goblin::Goblin(int Height, int Width,int Layer) : Enemy(Height, Width, Layer)
{
	enemySymbol = 'G';
	health = 50 + 7*LAYER;
	attack = 7 + 3*LAYER;
	enemyPos.x = rand() % (WIDTH - 1) + 1;
	enemyPos.y = rand() % (HEIGHT - 1) + 1;
}

void Goblin::moveEnemy()
{
	srand(time(NULL));
	bool hasMove = false;
	while (!hasMove)
	{
		int direction = rand() % 4;
		switch (direction)
		{
		case 0:
			if (enemyPos.x - 1 >= 0)
			{
				enemyPos.x -= 1;
				hasMove = true;
			}
			break;
		case 1:
			if (enemyPos.x + 1 < WIDTH)
			{
				enemyPos.x += 1;
				hasMove = true;
			}
			break;
		case 2:
			if (enemyPos.y - 1 >= 0)
			{
				enemyPos.y -= 1;
				hasMove = true;
			}
			break;
		case 3:
			if (enemyPos.y + 2 < HEIGHT)
			{
				enemyPos.y += 1;
				hasMove = true;
			}
			break;
		}
	}
}