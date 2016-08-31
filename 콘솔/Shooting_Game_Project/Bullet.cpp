#include "Bullet.h"
#include <math.h>

int B_BeforeX; //ÃÑ¾ËÀÇ ÀÌÀüÁÂÇ¥
int B_BeforeY; //

void InitBullet(float ex, float ey, float px, float py, int speed, Bullet * pBullet)
{
	float d;
	d = sqrt((px - ex) * (px - ex) + (py - ey) * (py - ey));

	pBullet->x = ex;
	pBullet->y = ey;

	pBullet->vx = (px - ex) / d * speed;
	pBullet->vy = (py - ey) / d * speed;
}

void MoveBullet(Bullet * pBullet)
{
	B_BeforeX = pBullet->x;
	B_BeforeY = pBullet->y;

	pBullet->x += pBullet->vx;
	pBullet->y += pBullet->vy;
}