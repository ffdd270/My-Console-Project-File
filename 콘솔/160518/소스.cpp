#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//�Լ� ������ ����.
//����ü�� ������ ��� �ɱ�?

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

//���� 1
//void min();
//void main()
//{
//	printf("�� �� �� ������ ���ϱ�");
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
//	printf("�� �� �� �������� %d", m);
//}

//���� 2
//void min(int x, int y);
//void main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("�� �� �� ������ ���ϱ�");
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
//	printf("�� �� �� �������� %d", m);
//}

//���� 3
//int min(int a, int b);
//void main()
//{
//	int a, b, m;
//	printf("�� �� �� ������ ���ϱ�");
//	scanf("%d%d", &a, &b);
//	
//	m = min(a, b);
//	printf("�� �� �� �������� %d", m);
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
//���� 4
//int plus(int a, int b);
//int minus(int a, int b);
//
//int main()
//{
//	int a, b;  int sum, diff;
//	printf("���� A : "); scanf("%d", &a);
//	printf("���� B : "); scanf("%d", &b);
//	sum = plus(a, b);
//	diff = minus(a, b);
//	printf("�� ������ �� %d \n",sum);
//	printf("�� ������ �� %d", diff);
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
//���� 5 �Լ� �����ε�
//
//int plus(int a, int b);
//int plus(int a, int b, int c);
//
//int main()
//{
//	int a, b, c;
//	int sum;
//	int choice;
//	printf("���� ! : 1 . �μ��� ����. 2. ������ ���� \n");
//	scanf("%d", &choice);
//	switch (choice)
//	{
//	case 1:
//		printf("���� A : "); scanf("%d", &a);
//		printf("���� B : "); scanf("%d", &b);
//		printf("�μ��� �� : %d",plus(a,b));
//		break;
//	case 2:
//		printf("���� A : "); scanf("%d", &a);
//		printf("���� B : "); scanf("%d", &b);
//		printf("���� C : "); scanf("%d", &c);
//		printf("������ �� : %d",plus(a,b,c));
//		break;
//	default:
//		printf("���� ��  �� ���Ӥ��Ť��Ӥ��Ӥ���\n");
//		printf(" ��  ��  ��  ��  ��  �� \n");
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

