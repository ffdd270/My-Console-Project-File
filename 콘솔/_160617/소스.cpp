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
//		printf("���� ���� �� ���� \n");
//		printf("���� = 0, ���� = 1, �� = 2 �� �Է��ϼ��� : ");
//		scanf("%d", &input);
//		if (IsitWin(input)) //IsitWin�� 1�� ��ȯ�ϸ� �¸��� �ǹ���
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

// 6-4 ���� �ڵ�
//int main()
//{
//	const int MAX = 15;
//	int arr[MAX][MAX] = { 0 };
//	int i, j, cnt = 1; //�ʱⰪ 1.
//	int Plus = 1;			
//	int ControlY = 0;
//	int ControlX = 0;
//	int Mid = ((MAX + MAX) / 2);
//	int Try_To = MAX + MAX - 1; //�׷��� �� Ƚ��
//
//	for (i = 0; i < Try_To; i++)
//	{
//		//�ʱ�ȭ �κ�
//		if (i < Mid) //�߰��� ��������.
//		{
//			ControlX = i; //X��ǥ�� 1�� ������Ų��.
//			ControlY = 0;
//		}
//		else //�߰��� ����,
//		{
//			ControlX = MAX - 1; //x��ǥ�� ���� ������ ���ϰ� �Ѵ�.
//			ControlY = Plus; //y��ǥ�� 1�� ������Ų��.
//			Plus++;
//		}
//		//�ʱ�ȭ ��
//
//		for (j = 0; j < MAX; j++)
//		{
//			arr[ControlY][ControlX] = cnt; 
//			cnt++;
//
//			if (i<Mid) //���� �׸� ��Ұ� ���� �߰��� ���� �ʾҴٸ�.
//			{
//				if (ControlX != 0) //X�� ���� ���ʿ� �پ� ���� �ʴٸ�.
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
//			else //�Ѿ��ٸ�
//			{
//				if (ControlY != MAX - 1) //Y�� ���� ������ ���� �ʾҴٸ�.
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
//	printf("�迭�� �Էµ� ���� ��� \n");
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