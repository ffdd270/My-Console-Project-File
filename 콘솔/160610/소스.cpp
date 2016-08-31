#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int Score[10] = { 0 };
//	int input;
//	printf("성적을 입력하세요. \n");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input < 0)
//		{
//			break;
//		}
//
//		input /= 10;
//		Score[input]++;
//	}
//
//	printf("성적 분포도 \n");
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ~ %d : ", (i * 10), (i * 10) + 9);
//		for (int j = 0; j < Score[i]; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	_getch();
//}

//int main()
//{
//	int arr[4] = { 5, 3, 40, 7 };
//	int a;
//	int N = sizeof(arr) / sizeof(arr[0]);
//
//	int big, small;
//	big = arr[0]; small = arr[0];
//
//	for (int i = 0; i < 4; i++)
//	{
//		if (big < arr[i])
//		{
//			big = arr[i];
//		}
//		else()
//	}
//
//}

//109P 2-2

//int main()
//{
//	int arr[] = { 10, 27, 25, 18, 9, 35, 13, 47 };
//	int N = sizeof(arr) / sizeof(arr[0]);
//	int Chk = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] >= 10 && arr[i] < 20)
//		{
//			Chk++;
//		}
//	}
//	printf("10~19사이의 값의 개수는 %d이다", Chk);
//	_getch();
//}

//
//int main()
//{
//	int arr[10];
//	int input;
//	int total = 0;
//	int Min, Max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d번 점수 : ",i+1);
//		scanf("%d", &input);
//		if (i == 0)
//		{
//			Min = input;
//		}
//		if (Min > input)
//		{
//			Min = input;
//		}
//		if (Max < input)
//		{
//			Max = input;
//		}
//		arr[i] = input;
//		total += input;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d번 점수 : %d\n",i+1,arr[i]);
//	}
//
//	printf("합은 = %d\n", total);
//	printf("평균은 %.2f\n", total/10.0);
//	printf("최대값은 = %d\n", Max);
//	printf("최소값은 = %d\n", Min);
//	_getch();
//}

//int main()
//{
//	int input;
//	while (1)
//	{
//		input = _getch();
//		printf("%d\n", input);
//	}
//}

//int main()
//{
//	int i, num[10];
//	num[0] = 1; num[1] = 2;
//	for (i = 2; i < 10; i++)
//	{
//		num[i] = num[i - 2] + num[i - 1];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("\n %d, ",num[i]);
//	}
//	_getch();
//}

//int main()
//{
//	int arr[2][3];
//	int Plus = 10;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			arr[i][j] = Plus;
//			Plus += 10;
//		}
//	}
//
//	printf("%4d %4d %4d \n", arr[0][0], arr[0][1], arr[0][2]);
//	printf("%4d %4d %4d \n", arr[1][0], arr[1][1], arr[1][2]);
//	_getch();
//}


//int main()
//{
//	int arr[2][3] = { 10, 20, 30, 40, 50, 60 };
//	//int arr[2][3] = { { 10, 20, 30 }, { 40, 50, 60 } };
//	//int arr[][3] = { 10, 20, 30, 40, 50, 60 };
//	//int arr[][3] = { { 10, 20, 30 }, { 40, 50, 60 } };
//	//int arr[][3] = { { 10, 20, 30 }, 40, 50, 60 };
//	//int arr[2][] = { 10, 20, 30, 40, 50, 60};
//	//int arr[2][] = { 10, 20, 30, { 40, 50, 60 } };
//	//int arr[2][3] = { 10, 20, 30, 40, 50, 60, 70 };
//	//int arr[2][3] = { { 10, 20, 30 }, 40, 50, 60, 70 };
//
//	int a, b;
//	a = 1, b = 0;
//
//	printf("%4d %4d %4d \n", arr[0][0], arr[b][a], arr[0][2]);
//	printf("%4d %4d %4d \n", arr[a][b], arr[0][1], arr[0][2]);
//	_getch();
//}

//int main()
//{
//	int arr[2][3];
//
//	printf("%d 바이트 \n", sizeof(arr[0][0]));
//	printf("%d 바이트 \n", sizeof(arr[0]));
//	printf("%d 바이트 \n", sizeof(arr));
//	printf("%d 개 \n", sizeof(arr[0])/ sizeof(arr[0][0]));
//	printf("%d 개 \n", sizeof(arr) / sizeof(arr[0]));
//
//	_getch();
//}

int main()
{
	static int arr[5][5];
	int i, j, k;
	k = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			k += 1;
			arr[i][j] = k;
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d 행", i);
		for (j = 0; j < 5; j++)
		{
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}
}