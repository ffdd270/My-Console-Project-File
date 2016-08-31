#include <stdio.h>
#include "Bullet.h"
#include <stdlib.h>
#include <conio.h>
#include "Screen.h"

extern int B_BeforeX;
extern int B_BeforeY;

typedef struct node_enemy
{
	int x, y; //적의 좌표
	int numofBullet;
	Bullet * str;
}Enemy;

typedef struct player
{
	int x, y; //플레이어의 좌표.
	int speed;
}Player;

int Stage[80][25] = { 0 };

void Render(Player pl, Enemy em, Bullet bl);
void Update(Player * ppl, Enemy em, Bullet bl);
void ChkingCrash();

int main()
{
	int i = 0;
	Enemy e_test = { 4, 3, 5 };
	Player p_test = { 30, 20 };
	Bullet b_test[5];
	for (int i = 0; i < 5; i++)
	{
		InitBullet(e_test.x, e_test.y, p_test.x, p_test.y, i+1, &b_test[i]);
	}
	ScreenInit();
	while (1)
	{
		for (int i = 0; i < 5; i++)
		{
			MoveBullet(&b_test[i]);
		}

		Update(&p_test, e_test, b_test[i]);
		Render(p_test, e_test, b_test[i]);

		for (int i = 0; i<5; i++)
		{
			if (b_test[i].y > 24 || b_test[i].x > 80)
			{
				InitBullet(e_test.x, e_test.y, p_test.x, p_test.y, i + 1, &b_test[i]);
			}
			if (b_test[i].y < 0 || b_test[i].x < 0)
			{
				InitBullet(e_test.x, e_test.y, p_test.x, p_test.y, i + 1, &b_test[i]);
			}
		}
	}
}

void Update(Player * ppl, Enemy em, Bullet bl)
{
	//키 입력
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'w':
			ppl->y--;
			break;
		case 's':
			ppl->y++;
			break;
		case 'a':
			ppl->x--;
			break;
		case 'd':
			ppl->x++;
			break;
		default:
			break;
		}
	}
	//끝

	//충돌체크
	int blx, bly;
	blx = bl.x; bly = bl.y;
	if (blx == ppl->x && bly == ppl->y)
	{
		_getch();
	}
	//끝

}

void Render(Player pl, Enemy em, Bullet bl)
{
	ScreenClear();
	ScreenPrint(pl.x, pl.y, "P");
	ScreenPrint(em.x, em.y, "E");
	ScreenPrint(bl.x, bl.y, "B");
	ScreenFlipping();
}