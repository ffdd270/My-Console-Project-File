#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Turbo.h"

void Makemap();
void Loadmap();

enum OBJECT_NAME
{
	SPACE, //���� ' '
	PLAYER, //�÷��̾� p
	DELIVER, //��޹� o
	TARGET, //��ǥ���� .
	WALL, //�� #
	PLAYER_ON_TAEGET, //�÷��̾ P�� ����.
	DELIVER_ON_TARGET, //��޹��� O�� ����
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
	printf("���° ��������? ");
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
	printf("�ε��� ���������� �̸��� �����ּ���.");
	scanf("%s", str);
	rfp = fopen(str, "r");
	if (rfp == NULL)
	{
		printf("������ �����ϴ�.");
		_getch();
		return;
	}
	int TargetNum = fgetc(rfp) - 48;
	fgetc(rfp);
	int PlayerX = fgetc(rfp) - 48;
	fgetc(rfp); //�����̽� ó��
	int PlayerY = fgetc(rfp) - 48;
	fgetc(rfp); //���� ó��


	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			Stage[i][j] = fgetc(rfp) - 48;
		}
		fgetc(rfp); //���๮�� ó��.
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
			//��ٸ���..
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
				case SPACE: //���� ' '
					gotoxy(j, i);
					printf(" ");
					break;
				case PLAYER: //�÷��̾� p
					gotoxy(j, i);
					printf("p");
					break;
				case DELIVER: //��޹� o
					gotoxy(j, i);
					printf("o");
					Deliver++;
					break;
				case TARGET: //��ǥ���� .
					gotoxy(j, i);
					printf(".");
					Target++;
					break;
				case WALL: //�� #
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
		printf("���� �׸��� �ִ� ��� : ");

		switch (NowDraw)
		{
		case SPACE: //���� ' '
			printf("����");
			break;
		case PLAYER: //�÷��̾� p
			printf("p");
			break;
		case DELIVER: //��޹� o
			printf("o");
			break;
		case TARGET: //��ǥ���� .
			printf(".");
			break;
		case WALL: //�� #
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