#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Turbo.h"

void Makemap();
void Loadmap();

enum OBJECT_NAME
{
	SPACE, //공백 ' '
	PLAYER, //플레이어 p
	DELIVER, //배달물 o
	TARGET, //목표지점 .
	WALL, //벽 #
	PLAYER_ON_TAEGET, //플레이어가 P로 변함.
	DELIVER_ON_TARGET, //배달물이 O로 변함
	UNKNOWN
};

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13
#define ESC 27
#define P '1'
#define D '2'
#define S '3'
#define W '4'
#define T '5'

FILE * fp;
FILE * rfp;
int Stage[20][20];

struct Player
{
	int x, y;
};

struct Cursur
{
	int x, y;
};



void NewMake()
{
	char str[20];
	int input;
	system("cls");
	printf("몇번째 스테이지? ");
	scanf("%d", &input);
	sprintf(str, "stage%d.txt", input);
	fp = fopen(str, "w");
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			Stage[i][j] = 0;
		}
	}
	MakingMap(0, 0, 0);
}

void LoadMap()
{
	system("cls");
	char str[20];
	printf("로드할 스테이지의 이름을 적어주세요.");
	scanf("%s", str);
	rfp = fopen(str, "r");
	if (rfp == NULL)
	{
		printf("파일이 없습니다.");
		_getch();
		return;
	}
	int TargetNum = fgetc(rfp) - 48;
	fgetc(rfp);
	int PlayerX = fgetc(rfp) - 48;
	fgetc(rfp); //스페이스 처리
	int PlayerY = fgetc(rfp) - 48;
	fgetc(rfp); //개행 처리


	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			Stage[i][j] = fgetc(rfp) - 48;
		}
		fgetc(rfp); //개행문자 처리.
	}
	fp = fopen(str, "w");
	MakingMap(PlayerX, PlayerY, TargetNum);
}

void MakingMap(int PlayerX, int PlayerY, int TargetNum)
{
	int input;
	char str[20];

	Cursur cur;
	int NowDraw = 0;
	bool dowhile = true;
	Player player;
	int Target = TargetNum;
	int Deliver = TargetNum;
	player.x = PlayerX; player.y = PlayerY;
	cur.x = 0; cur.y = 0;


	setcursortype(NOCURSOR);

	system("cls");


	while (dowhile)
	{
		while (_kbhit() == 0)
		{
			//기다리기..
		}
		system("cls");

		switch (_getch())
		{
		case UP:
			if (cur.y > 0)
			{
				cur.y--;
			}
			break;
		case DOWN:
			if (cur.y < 20)
			{
				cur.y++;
			}
			break;
		case LEFT:
			if (cur.x > 0)
			{
				cur.x--;
			}
			break;
		case RIGHT:
			if (cur.x < 20)
			{
				cur.x++;
			}
			break;
		case P: NowDraw = PLAYER; break;
		case D: NowDraw = DELIVER; break;
		case S:	NowDraw = SPACE; break;
		case W:	NowDraw = WALL; break;
		case T: NowDraw = TARGET; break;
		case ENTER:
			Stage[cur.y][cur.x] = NowDraw;
			if (NowDraw == PLAYER)
			{
				Stage[player.y][player.x] = 0;
				player.y = cur.y;
				player.x = cur.x;
			}
			break;
		case ESC:
			if (Target == Deliver)
				dowhile = false;
			break;
		}

		Deliver = 0;
		Target = 0;

		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				switch (Stage[i][j])
				{
				case SPACE: //공백 ' '
					gotoxy(j, i);
					printf(" ");
					break;
				case PLAYER: //플레이어 p
					gotoxy(j, i);
					printf("p");
					break;
				case DELIVER: //배달물 o
					gotoxy(j, i);
					printf("o");
					Deliver++;
					break;
				case TARGET: //목표지점 .
					gotoxy(j, i);
					printf(".");
					Target++;
					break;
				case WALL: //벽 #
					gotoxy(j, i);
					printf("#");
					break;
				default:
					break;
				}
			}
		}

		gotoxy(cur.x, cur.y);
		printf(":");
		gotoxy(30, 10);
		printf("현재 그리고 있는 블록 : ");

		switch (NowDraw)
		{
		case SPACE: //공백 ' '
			printf("공백");
			break;
		case PLAYER: //플레이어 p
			printf("p");
			break;
		case DELIVER: //배달물 o
			printf("o");
			break;
		case TARGET: //목표지점 .
			printf(".");
			break;
		case WALL: //벽 #
			printf("#");
			break;
		default:
			break;
		}
	}

	fputc(Target + 48, fp);
	fputc('\n', fp);
	fputc(player.x + 48, fp);
	fputc(' ', fp);
	fputc(player.y + 48, fp);
	fputc('\n', fp);
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			fputc(Stage[i][j] + 48, fp);
		}
		fputc('\n', fp);
	}
	system("cls");
	fclose(fp);
	if (rfp != NULL)
	{
		fclose(rfp);
	}
}