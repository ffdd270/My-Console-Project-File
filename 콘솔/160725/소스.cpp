#include <stdio.h>
#include <conio.h>

//배열 스왑핑
//#define MAX 5
//
//int main()
//{
//	int arr[MAX] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	int i, temp;
//	printf("순서를 바꾸기전 배열의 내용 \n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//	for (i = 0; i < MAX / 2; i++)
//	{
//		temp = p[i];
//		p[i] = p[MAX - i - 1];
//		p[MAX - i - 1] = temp;
//	}
//
//	printf("순서를 바꾼후 배열의 내용 \n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	_getch();
//
//}


//가장큰값 찾기


int MaxVal(int *ptr, int len);

#define MAX(x,y) x > y ? x : y

int main(void)
{
	int arr[10];
	int i, max;
	printf("배열의 값을 입력하세요 \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d번째 요소의 값 : ",i+1);
		scanf("%d", &arr[i]);
	}
	max = MaxVal(arr, sizeof(arr) / sizeof(int));
	printf("최대값 : %d",max);
	_getch();
}

int MaxVal(int *ptr, int len)
{
	int max = ptr[0];
	for (int i = 0; i < len; i++)
	{
		max = MAX(ptr[i], max);
	}
	return max;
}