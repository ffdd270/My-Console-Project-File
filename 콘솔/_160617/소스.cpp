#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
//
//int IsitWin(int PlayerInput);
//
//int main()
//{
//	int input;
//
//	while (1)
//	{
//		printf("가위 바위 보 게임 \n");
//		printf("가위 = 0, 바위 = 1, 보 = 2 를 입력하세요 : ");
//		scanf("%d", &input);
//		if (IsitWin(input)) //IsitWin이 1을 반환하면 승리를 의미함
//		{
//			break;
//		}
//	}
//}
//
//int IsitWin(int PlayerInput)
//{
//	int ComputerSel;
//	srand((int)time(NULL));
//	ComputerSel = rand() % 3;
//
//	if (PlayerInput == ComputerSel)
//	{
//		printf("")
//	}
//}

// 6-4 나의 코드
//int main()
//{
//	const int MAX = 15;
//	int arr[MAX][MAX] = { 0 };
//	int i, j, cnt = 1; //초기값 1.
//	int Plus = 1;			
//	int ControlY = 0;
//	int ControlX = 0;
//	int Mid = ((MAX + MAX) / 2);
//	int Try_To = MAX + MAX - 1; //그려야 할 횟수
//
//	for (i = 0; i < Try_To; i++)
//	{
//		//초기화 부분
//		if (i < Mid) //중간줄 이전까지.
//		{
//			ControlX = i; //X좌표를 1씩 증가시킨다.
//			ControlY = 0;
//		}
//		else //중간줄 이후,
//		{
//			ControlX = MAX - 1; //x좌표를 제일 끝으로 향하게 한다.
//			ControlY = Plus; //y좌표를 1씩 증가시킨다.
//			Plus++;
//		}
//		//초기화 끝
//
//		for (j = 0; j < MAX; j++)
//		{
//			arr[ControlY][ControlX] = cnt; 
//			cnt++;
//
//			if (i<Mid) //만약 그릴 장소가 아직 중간을 넘지 않았다면.
//			{
//				if (ControlX != 0) //X가 제일 왼쪽에 붙어 있지 않다면.
//				{
//					ControlY++;
//					ControlX--;
//				}
//				else
//				{
//					break;
//				}
//
//			}
//			else //넘었다면
//			{
//				if (ControlY != MAX - 1) //Y가 제일 밑으로 가지 않았다면.
//				{
//					ControlY++;
//					ControlX--;
//				}
//
//				else
//				{
//					break;
//				}
//			}
//		}
//	}
//
//	printf("배열에 입력된 내용 출력 \n");
//	for (i = 0; i < MAX; i++)
//	{
//		for (j = 0; j < MAX; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				printf("     ");
//			}
//			else
//			{
//				printf("%5d", arr[i][j]);
//			}
//
//		}
//		printf("\n");
//	}
//	_getch();
//}
//
#define MAX  5
int main()
{
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			//NULL! ! ! ! ! ! ! ! ! ! ! ! ! ! ! !
		}
	}
}