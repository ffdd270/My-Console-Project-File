#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int arr[2][2][3];
//	int i, j, k;
//	arr[0][0][0] = 1; arr[0][0][1] = 2; arr[0][0][2] = 3; arr[0][1][0] = 4;
//	arr[0][1][1] = 5; arr[0][1][2] = 6; arr[1][0][0] = 7; arr[1][0][1] = 8;
//	arr[1][0][2] = 9; arr[1][1][0] = 10; arr[1][1][1] = 11; arr[1][1][2] = 12;
//
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			for (k = 0; k < 3; k++)
//			{
//				printf("%4d ", arr[i][j][k]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//
//	_getch();
//}

//116 예제 16
//int main()
//{
//	int arr[2][2][3];
//	printf("%d 바이트\n", sizeof(arr[0][0][0]));
//	printf("%d 바이트\n", sizeof(arr[0][0]));
//	printf("%d 바이트\n", sizeof(arr[0]));
//	printf("%d 바이트\n", sizeof(arr));
//	_getch();
//}
//

//int main()
//{
//	int arr[2][2][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	//int arr[2][2][3] = { { { 1, 2, 3 }, { 4, 5, 6 } }, { { 7, 8, 9 }, 10, 11, 12 } };
//	//int arr[][2][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	//int arr[][2][3] = { { 1, 2, 3, 4, 5, 6 }, { 7, 8, 9, 10, 11, 12 } };
//	//int arr[][2][3] = { { { 1, 2, 3 }, { 4, 5, 6 } }, { { 7, 8, 9 }, 10, 11, 12 } };
//	int i, j, k;
//
//	int M = sizeof(arr) / sizeof(arr[0]);
//	int H = sizeof(arr[0]) / sizeof(arr[0][0]);
//	int Y = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);
//
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < H; j++)
//		{
//			for (k = 0; k < Y; k++)
//			{
//				printf("%3d ", arr[i][j][k]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	_getch();
//}

//int main()
//{
//	int arr[3][3][3];
//
//	int Plus = 1;
//	int MaxZ = sizeof(arr) / sizeof(arr[0]);
//	int MaxY = sizeof(arr[0]) / sizeof(arr[0][0]);
//	int MaxX = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);
//	for (int i = 0; i < MaxZ; i++)
//	{
//		for (int j = 0; j < MaxY; j++)
//		{
//			for (int k = 0; k < MaxX; k++)
//			{
//				arr[i][j][k] = Plus;
//				printf(" arr[%d][%d][%d] = %3d ", i, j, k, arr[i][j][k]);
//				Plus++;
//			}
//			printf("\n");
//		}
//		Plus++;
//		printf("\n");
//	}
//
//	_getch();
//}

//124p 예제 21
//int main()
//{
//	char arr[5][5];
//	int i, j, cnt = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cnt++;
//			arr[i][j] = cnt;
//		}
//	}
//
//	printf("배열에 입력된 내용 출력 \n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	_getch();
//}


//int main()
//{
//	char arr[5][5] = { 0 };
//	int i, j, cnt = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			cnt++;
//			arr[i][j] = cnt;
//		}
//
//	}
//
//	printf("배열에 입력된 내용 출력 \n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				printf(" ");
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

//6-1
//int main()
//{
//	int arr[5][5] = { 0 };
//	int i, j, cnt = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 4; j >= 4 - i; j--)
//		{
//			cnt++;
//			arr[i][j] = cnt;
//		}
//
//	}
//
//	printf("배열에 입력된 내용 출력 \n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j] == 0)
//			{
//				printf("     ");
//			}
//
//			else
//			{
//				printf("%5d", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	_getch();
//}

//문 6-2
//int main()
//{
//	char arr[5][5] = { 0 };
//	int i, j, cnt = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = i; j < 5; j++)
//		{
//			cnt++;
//			arr[i][j] = cnt;
//		}
//
//	}
//
//	printf("배열에 입력된 내용 출력 \n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
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

//6-3


int main()
{
	const int MAX = 11;

	int arr[MAX][MAX] = { 0 };

	int i, j, cnt = 0;

	int Mid = MAX / 2;

	int Plus = 0;
	for (i = 0; i < MAX; i++)
	{
		for (int j = Mid - Plus; j < Mid + 1 + Plus; j++)
		{
			cnt++;
			arr[i][j] = cnt;
		}

		if (i < Mid)
		{
			Plus++;
		}

		else
		{
			Plus--;
		}

	}

	printf("배열에 입력된 내용 출력 \n");
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			if (arr[j][i] == 0)
			{
				printf("     ");
			}
			else
			{
				printf("%5d", arr[i][j]);
			}

		}
		printf("\n");
	}
	_getch();
}

//int main()
//{
//	const int MAX = 5;
//	int arr[MAX][MAX] = { 0 };
//	int i, j, cnt = 0;
//
//	for (i = 0; i < MAX; i++)
//	{
//		for (j = i; j < 5; j++)
//		{
//			if (cnt != 4)
//			{
//				cnt++;
//			}
//
//			arr[i][j] = cnt;
//		}
//
//	}
//
//	printf("배열에 입력된 내용 출력 \n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
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