#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//void sum_diff_mul(int n1, int n2, int * sum, int * diff, int * mul)
//{
//	*sum = n1 + n2;
//	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
//	*mul = n1 * n2;
//}
//
//int main()
//{
//	int n1, n2;
//	int sum, diff, mul;
//	printf("����A : ");
//	scanf("%d", &n1);
//	printf("����B : ");
//	scanf("%d", &n2);
//	sum_diff_mul(n1, n2, &sum, &diff, &mul);
//	printf("���� %d�Դϴ�.\n", sum);
//	printf("���� %d�Դϴ�.\n", diff);
//	printf("���� %d�Դϴ�.\n", mul);
//	_getch();
//}

//void sort2(int * num1, int * num2)
//{
//	int temp;
//	if (*num1 > *num2)
//	{
//		temp = *num1;
//		*num1 = *num2;
//		*num2 = temp;
//	}
//}
//
//int main()
//{
//	int na, nb;
//	puts("2���� �������� �Է��� �ּ���");
//	printf("���� A : "); scanf("%d", &na);
//	printf("���� B : "); scanf("%d", &nb);
//	sort2(&na, &nb);
//	printf("�������� ����\n");
//	printf("���� A : %d\n",na);
//	printf("���� B : %d\n",nb);
//	_getch();
//}

//void swap(int * nx, int * ny)
//{
//	int temp;
//	temp = *nx;
//	*nx = *ny;
//	*ny = temp;
//}
//
//void sort3(int * num1, int * num2, int * num3)
//{
//	if (*num1 > *num2)
//	{
//		swap(num1, num2);
//	}
//	if (*num2 > *num3)
//	{
//		swap(num2, num3);
//	}
//	if (*num1 > *num2)
//	{
//		swap(num1, num2);
//	}
//}
//
//int main()
//{
//	int na, nb, nc;
//	puts("�� ���� �������� �Է����ּ���.");
//	printf("���� A : "); scanf("%d", &na);
//	printf("���� B : "); scanf("%d", &nb);
//	printf("���� C : "); scanf("%d", &nc);
//
//	sort3(&na, &nb, &nc);
//
//	puts("���� ���� ! ");
//	printf("���� A : %d\n",na);
//	printf("���� B : %d\n", nb);
//	printf("���� C : %d\n", nc);
//	_getch();
//}


void yesterday(int * y, int * m, int * d);
