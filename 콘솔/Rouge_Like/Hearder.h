#ifndef __HEARDER_H__
#define __HEARDER_H__

class Render
{
private:
	int x, y;
	void gotoxy(int x, int y);
	void CursorShow(bool cursor);
public:
	void Rendering(int x, int y, char target); //대상의 x좌표와 y좌표를 받고, target을 출력합니다.
};

class BasicCh
{
protected:
	char name[100];
	int level;
	int hp, mp, str, dex, majika, luk; //채력, 마나, 힘, 민첩, 마법력 , 운
	int atk, def; //공격력 방어력

	int x, y; //객체의 좌표값을 저장합니다.
	int defance(int deal);  //데미지를 인수로 받음
public:

};

class Hero : public BasicCh
{
private:
	void Attack(Monstor * target); //공격
	int havegold;
	int maxexp;
	int exp;
public:
	Hero(char * getname); //영웅 초기화
	Hero * ReturnThis();
};

class Monstor : public BasicCh
{
private:
	const int gold; //처치시 보상
	const int maxhp;
	void Attack(); //공격
	const int getexp; // 몬스터가 주는 경험치
public:
	Monstor(int inputexp, int gold, const char * getname, int getdex, int getmajika, int getluk, int getstr);
	void Recuvery(); //채력등을 다시 복구 합니다.
	Monstor * ReturnThis();
};



class Control
{
private:

public:
};

class game
{
private:
	typedef struct Monstors;
	int floor; //층을 기록합니다.
public:

	game();
};
#endif