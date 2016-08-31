#include <stdio.h>
#include <conio.h>

//#define MAX(x,y) x > y ? x : y
//
//int BubbleSort(int * ptr, int len);
//
//int main()
//{
//	int arr[10] = { 10, 3, 4, 7, 9, 5, 6, 21, 32, 40 };
//	printf("원형 : ");
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	for (int i = 0; i < 10; i++)
//	{
//		int len = sizeof(arr) / sizeof(int);
//		BubbleSort(arr, len);
//		printf("%d 단계 후의 배열 내용 : ",i+1);
//		for (int j = 0; j < 10; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//		printf("\n");
//	}
//	_getch();
//}
//
//int BubbleSort(int * ptr, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int temp;
//		int MAX = MAX(ptr[i], ptr[i + 1]);
//		if (ptr[i] == MAX) // ptr[i]가 더 크면.
//		{
//			temp = ptr[i+1];
//			ptr[i + 1] = ptr[i];
//			ptr[i] = temp;
//		}
//	}
//	return 0;
//}


//#define SIZE 7
//
//void merge(int * A, int * B, int * C);
//void rect(int * a);
//
//int main()
//{
//	int A[SIZE] = { 5, 2, 8, 10, 9, 11, 14 };
//	int B[SIZE] = { 4, 3, 6, 1, 7, 12, 13 };
//	int C[100] = { 0 };
//	int i = 0;
//	rect(A);
//	rect(B);
//	merge(A, B, C);
//
//	printf("배열 { ");
//	i = 0;
//
//	while (C[i] != '\0')
//	{
//		printf("%d, ",C[i]);
//		i++;
//	}
//	printf("}");
//	_getch();
//}
//
//void merge(int * A, int * B, int * C)
//{
//	int j = 0, k = 0;
//
//	for (int i = 0; ; i++)
//	{
//		if (j >= SIZE || k >= SIZE)
//		{
//			if (j >= SIZE)
//			{
//				C[i] = B[k];
//				k++;
//			}
//			else
//			{
//				C[i] = A[j];
//				j++;
//			}
//		}
//		else
//		{
//			if (A[j] > B[k])
//			{
//				C[i] = B[k];
//				k++;
//			}
//			else
//			{
//				C[i] = A[j];
//				j++;
//			}
//		}
//
//		if (j >= SIZE && k >= SIZE)
//		{
//			break;
//		}
//	}
//}
//
//void rect(int * a)
//{
//	int max;
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE - 1; j++)
//		{
//			max = a[j] > a[j + 1] ? a[j] : a[j + 1];
//			if (max == a[j])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}



//void Show_data(int(*parr)[4], int a);
//int main()
//{
//	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[3][4] = { { 1 }, { 2 }, { 3 } };
//	
//	Show_data(arr1, 2);
//	Show_data(arr2, 3);
//
//	_getch();
//}
//
//
//void Show_data(int(*parr)[4], int a)
//{
//	int i, j;
//	printf("-------Start Print--------\n");
//
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int i, *pt;
//
//	pt = (int *)arr;
//
//	printf("arr = %p, arr + 1 = %p, pt = %p, pt + 1 = %p", arr, arr + 1, pt, pt + 1);
//	_getch();
//}

int main()
{
	int arr[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int(*pt1)[2], (*pt2)[4];
	int i = 0;

	pt1 = (int(*)[2])arr;
	pt2 = (int(*)[4])arr;

	printf("arr = %p, arr + 1 = %p\n",arr,arr+1);
	printf("pt1 + 1  = %p pt2 + 1 = %p", pt1 + 1, pt2 + 2);

	_getch();
}