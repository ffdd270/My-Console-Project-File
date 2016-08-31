#ifndef __BULLET_H__
#define __BULLET_H__

//16-07-01 HSH 
//총알 부분을 분리함.


typedef struct node_bullet
{
	float x, y; //총알의 좌표.
	float vx, vy; //총알의 속도.
}Bullet;

void InitBullet(float ex, float ey, float px, float py, int speed, Bullet * pBullet);
void MoveBullet(Bullet * pBullet);

#endif