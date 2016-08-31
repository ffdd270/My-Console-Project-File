#include <stdio.h>
#include <conio.h>


//#include <stdio.h>
//#include <conio.h>
//
//int day[2][13] = {
//	{ 0, 31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31 },
//	{ 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
//};
//
//void yesterday(int *y, int *m, int *d);
//void tomorrow(int *y, int *m, int *d);
//int isleap(int year);
//
//int main()
//{
//	int y, m, d;
//	int ay, am, ad;
//	int by, bm, bd;
//
//	printf("년 : "); scanf("%d", &y);
//	printf("달 : "); scanf("%d", &m);
//	printf("일 : "); scanf("%d", &d);
//
//	ay = by = y;
//	am = bm = m;
//	ad = bd = d;
//
//	tomorrow(&ay, &am, &ad);
//	yesterday(&by, &bm, &bd);
//	printf("전날 : %d년 %d월 %d일 \n", by, bm, bd);
//	printf("다음날 : %d년 %d월 %d일 \n", ay, am, ad);
//	_getch();
//}
//
//int isleap(int year)
//{
//	int leap = 0;
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0 || year % 400 == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//void yesterday(int *y, int *m, int *d)
//{
//	int leap = 0;
//
//	if (isleap)
//	{
//		leap = 1;
//	}
//	if (*d == 1)
//	{
//		if (*m == 1)
//		{
//			*m = 12;
//			*d = day[leap][12];
//			(*y)--;
//		}
//		else
//		{
//			(*m)--;
//		}
//		*d = day[leap][*m];
//	}
//	else
//	{
//		(*d)--;
//	}
//}
//
//void tomorrow(int *y, int *m, int *d)
//{
//	int leap = 0;
//	if (isleap)
//	{
//		leap = 1;
//	}
//	if (*m == 12)
//	{
//		if (*d == 31)
//		{
//			(*y)++;
//			*d = 1;
//			*m = 1;
//			return;
//		}
//	}
//	if (day[leap][*m] == *d)
//	{
//		(*m)++;
//		*d = 1;
//		return;
//	}
//	(*d)++;
//}


//int main()
//{
//	int arr[3] = { 0, 1, 2 };
//	int * ptr;
//	ptr = arr;
//	printf("%d %d %d %d %d %d", ptr[0], ptr[1], ptr[2], arr[0], arr[1], arr[2]);
//	_getch();
//}

//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int i, *ipt;
//	double d = 100, *fpt;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[%d] = %d\n",i,&arr[i]);
//	}
//
//	printf("배열 대표명 arr = %u, &arr[0] = %u\n", arr,&arr[0]);
//	printf("*arr = %d\n", *arr);
//
//	ipt = &i;
//	fpt = &d;
//
//	printf("&i = %u, (&i + 1) = %u\n", &i, &i + 1);
//	printf("ipt = %u, ipt + 1 = %u\n", ipt, ipt + 1);
//	printf("fpt = %u, fpt + 1 = %u\n", fpt, fpt + 1);
//	_getch();
//}


//int main()
//{
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int i, *pt;
//	pt = arr;
//	printf("포인터 변수 증가 \n");
//	printf("pointer 변수 증가 \n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("pt = %u *pt = %d\n", pt, *pt);
//		pt++;
//	}
//	printf("포인터 변수 감소 \n");
//	for (i = 0; i < 5; i++)
//	{
//		pt--;
//		printf("pt = %u, *pt = %d\n", pt, *pt);
//	}
//	printf("pt = arr[2] 실행후\n");
//	pt = &arr[2];
//	printf("pt + 1 = %u, *pt + 1 = %d", pt + 1, (*pt) + 1);
//	_getch();
//}

int main()
{
	int arr[5][5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 0)
			{
				goto ZERO;
			}
			printf("%d ", arr[i][j]);
		}
	}
ZERO:
	printf("0을 만났습니다!");
	_getch();
}