#ifndef __HEARDER_H__
#define __HEARDER_H__

class Render
{
private:
	int x, y;
	void gotoxy(int x, int y);
	void CursorShow(bool cursor);
public:
	void Rendering(int x, int y, char target); //����� x��ǥ�� y��ǥ�� �ް�, target�� ����մϴ�.
};

class BasicCh
{
protected:
	char name[100];
	int level;
	int hp, mp, str, dex, majika, luk; //ä��, ����, ��, ��ø, ������ , ��
	int atk, def; //���ݷ� ����

	int x, y; //��ü�� ��ǥ���� �����մϴ�.
	int defance(int deal);  //�������� �μ��� ����
public:

};

class Hero : public BasicCh
{
private:
	void Attack(Monstor * target); //����
	int havegold;
	int maxexp;
	int exp;
public:
	Hero(char * getname); //���� �ʱ�ȭ
	Hero * ReturnThis();
};

class Monstor : public BasicCh
{
private:
	const int gold; //óġ�� ����
	const int maxhp;
	void Attack(); //����
	const int getexp; // ���Ͱ� �ִ� ����ġ
public:
	Monstor(int inputexp, int gold, const char * getname, int getdex, int getmajika, int getluk, int getstr);
	void Recuvery(); //ä�µ��� �ٽ� ���� �մϴ�.
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
	int floor; //���� ����մϴ�.
public:

	game();
};
#endif