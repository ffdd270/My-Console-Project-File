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
//	printf("정수A : ");
//	scanf("%d", &n1);
//	printf("정수B : ");
//	scanf("%d", &n2);
//	sum_diff_mul(n1, n2, &sum, &diff, &mul);
//	printf("합은 %d입니다.\n", sum);
//	printf("차은 %d입니다.\n", diff);
//	printf("곱은 %d입니다.\n", mul);
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
//	puts("2개의 정수값을 입력해 주세요");
//	printf("정수 A : "); scanf("%d", &na);
//	printf("정수 B : "); scanf("%d", &nb);
//	sort2(&na, &nb);
//	printf("오름차순 정렬\n");
//	printf("정수 A : %d\n",na);
//	printf("정수 B : %d\n",nb);
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
//	puts("세 개의 정수값을 입력해주세요.");
//	printf("정수 A : "); scanf("%d", &na);
//	printf("정수 B : "); scanf("%d", &nb);
//	printf("정수 C : "); scanf("%d", &nc);
//
//	sort3(&na, &nb, &nc);
//
//	puts("오름 차순 ! ");
//	printf("정수 A : %d\n",na);
//	printf("정수 B : %d\n", nb);
//	printf("정수 C : %d\n", nc);
//	_getch();
//}


void yesterday(int * y, int * m, int * d);
