#ifndef __BULLET_H__
#define __BULLET_H__

//16-07-01 HSH 
//�Ѿ� �κ��� �и���.


typedef struct node_bullet
{
	float x, y; //�Ѿ��� ��ǥ.
	float vx, vy; //�Ѿ��� �ӵ�.
}Bullet;

void InitBullet(float ex, float ey, float px, float py, int speed, Bullet * pBullet);
void MoveBullet(Bullet * pBullet);

#endif