#ifndef TURBOC_HEADER
#define TURBOC_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

typedef enum{NOCURSOR,SOLIDCURSOR,NORMALCUROSR} CURSOR_TYPE;

void clrscr();
void gotoxy(int x, int y);
int wherex();
int wherey();
void setcursortype(CURSOR_TYPE c);

#define delay(n) Sleep(n)
#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % n)
#ifndef TUROOC_PROTOTYPE_ONLY

void clrscr()
{
	system("cls");
}

void gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO Bufinfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Bufinfo);
	return Bufinfo.dwCursorPosition.X;
}

int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO Bufinfo;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Bufinfo);
	return Bufinfo.dwCursorPosition.Y;
}
void setcursortype(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO Curinfo;
	switch (c)
	{
	case NOCURSOR:
		Curinfo.dwSize = 1;
		Curinfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		Curinfo.dwSize = 100;
		Curinfo.bVisible = TRUE;
		break;
	case NORMALCUROSR:
		Curinfo.dwSize = 20;
		Curinfo.bVisible = TRUE;
		break;
	default:
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Curinfo);
}


#endif
#endif