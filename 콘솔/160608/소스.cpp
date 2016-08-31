#include <stdio.h>
#include <conio.h>

//예제 2 105P

//int main()
//{
//	int i, sum = 10;
//	int k[6];
//	for (i = 0; i < 6; i++)
//	{
//		k[i] = sum;
//		sum += 10;
//	}
//
//	sum = 0;
//
//	for (i = 0; i < 6; i++)
//	{
//		sum += k[i];
//		printf("sum = %d\n", sum);
//	}
//	_getch();
//}

//int main()
//{
//	int i;
//	int k[6] = { 10, 20, 30 };
//
//	for (i = 0; i < 6; i++)
//	{
//		printf("k[%d] ==> %d \n", i, k[i]);
//	}
//	_getch();
//}


int main()
{
	int i, sum = 0;
	int data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //첨자 요소 생략
	for (i = 0; i < 10; i++)
	{
		if (data[i] % 2 == 0)
		{
			sum += data[i];
		}
	}
	printf("2 + 4 + 6 + 8 + 10 = %d", sum);
	_getch();
}