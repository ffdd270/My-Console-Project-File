#include "Hearder.h"
#include <iostream>
#include <string>

Monstor::Monstor(int inputexp, const int gold, const char * getname, int getdex, int getmajika, int getluk, int getstr)
{
	strcpy(name, getname);
	str = getstr;
	luk = getluk;
	this->gold = gold;
}