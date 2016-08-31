#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//함수 포인터 예제.
//구조체에 넣으면 어떻게 될까?

//typedef struct testfuc
//{
//	int(*plus)(int, int);
//	void(*print)(char *);
//}test;
//
//
//int func(int d1, int d2)
//{
//	return d1 + d2;
//}
//
//void Printing(char * str)
//{
//	printf("%s", str);
//}
//
//void init(test * pTest)
//{
//	pTest->plus = func;
//	pTest->print = Printing;
//}
//
//int main()
//{
//	testfuc jtest;
//	init(&jtest);
//	printf("%d",jtest.plus(30,30));
//	jtest.print("Hello, Func!");
//	_getch();
//}

//예제 1
//void min();
//void main()
//{
//	printf("두 수 중 작은수 구하기");
//	min();
//	_getch();
//}
//
//void min()
//{
//	int a, b, m;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		m = b;
//	}
//	else
//	{
//		m = a;
//	}
//	printf("두 수 중 작은수는 %d", m);
//}

//예제 2
//void min(int x, int y);
//void main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("두 수 중 작은수 구하기");
//	min(a,b);
//	_getch();
//}
//
//void min(int a, int b)
//{
//	int m;
//	if (a > b)
//	{
//		m = b;
//	}
//	else
//	{
//		m = a;
//	}
//	printf("두 수 중 작은수는 %d", m);
//}

//예제 3
//int min(int a, int b);
//void main()
//{
//	int a, b, m;
//	printf("두 수 중 작은수 구하기");
//	scanf("%d%d", &a, &b);
//	
//	m = min(a, b);
//	printf("두 수 중 작은수는 %d", m);
//	_getch();
//}
//
//int min(int a, int b)
//{
//	int m;
//	if (a > b)
//	{
//		m = b;
//	}
//	else
//	{
//		m = a;
//	}
//	return m;
//}
//예제 4
//int plus(int a, int b);
//int minus(int a, int b);
//
//int main()
//{
//	int a, b;  int sum, diff;
//	printf("정수 A : "); scanf("%d", &a);
//	printf("정수 B : "); scanf("%d", &b);
//	sum = plus(a, b);
//	diff = minus(a, b);
//	printf("두 정수의 합 %d \n",sum);
//	printf("두 정수의 차 %d", diff);
//	_getch();
//}
//
//int plus(int a, int b)
//{
//	return a + b;
//}
//
//int minus(int a, int b)
//{
//	if (a > b)
//	{
//		return a - b;
//	}
//	else
//	{
//		return b - a;
//	}
//}
//예제 5 함수 오버로드
//
//int plus(int a, int b);
//int plus(int a, int b, int c);
//
//int main()
//{
//	int a, b, c;
//	int sum;
//	int choice;
//	printf("선택 ! : 1 . 두수의 덧샘. 2. 세수의 덧샘 \n");
//	scanf("%d", &choice);
//	switch (choice)
//	{
//	case 1:
//		printf("정수 A : "); scanf("%d", &a);
//		printf("정수 B : "); scanf("%d", &b);
//		printf("두수의 합 : %d",plus(a,b));
//		break;
//	case 2:
//		printf("정수 A : "); scanf("%d", &a);
//		printf("정수 B : "); scanf("%d", &b);
//		printf("정수 C : "); scanf("%d", &c);
//		printf("세수의 합 : %d",plus(a,b,c));
//		break;
//	default:
//		printf("ㅈㅏ 모  되 ㅇㅣㄹㅕㅇㅣㄴㅣㄷㅏ\n");
//		printf(" ㄹ  ㅅ  ㄴ  ㅂ  ㄱ  ㅂ \n");
//		break;
//	}
//
//	_getch();
//}
//
//int plus(int a, int b)
//{
//	return a + b;
//}
//
//int plus(int a, int b, int c)
//{
//	return a + b + c;
//}

