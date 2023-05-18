#include "Bat.h"

Bat::Bat(int Height,int Width,int Layer) : Enemy (Height, Width, Layer)
{
	HEIGHT = Height;
	WIDTH = Width;
	enemySymbol = 'B';
	health = 25 + 5*LAYER;
	attack = 5 + 2*LAYER;
	enemyPos.x = rand() % (WIDTH - 1) + 1;
	enemyPos.y = rand() % (HEIGHT - 1) + 1;
}

void Bat::moveEnemy()
{
	srand(time(NULL));
	bool hasMove = false;
	while (!hasMove)
	{
		int direction = rand() % 4;
		switch (direction)
		{
		case 0:
			if (enemyPos.x - 2 >= 0)
			{
				enemyPos.x -= 2;
				hasMove = true;
			}
			break;
		case 1:
			if (enemyPos.x + 2 < WIDTH)
			{
				enemyPos.x += 2;
				hasMove = true;
			}
			break;
		case 2:
			if (enemyPos.y - 2 >= 0)
			{
				enemyPos.y -= 2;
				hasMove = true;
			}
			break;
		case 3:
			if (enemyPos.y + 2 < HEIGHT)
			{
				enemyPos.y += 2;
				hasMove = true;
			}
			break;
		}
	}
}