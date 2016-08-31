#include "Hearder.h"
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

Hero::Hero(char * getname)
{
	strcpy(name, getname);
	level = 1;
	str = rand() % 10;
	dex = rand() % 10;
	majika = rand() % 10;

	def = str / 2;
	atk = str;
	hp = str * 2;
	mp = majika * 2;
}

void Hero::Attack(Monstor * target)
{

}

Hero * Hero::ReturnThis()
{

}