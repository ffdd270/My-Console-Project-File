#include <stdio.h>
#include <conio.h>

//�迭 ������
//#define MAX 5
//
//int main()
//{
//	int arr[MAX] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	int i, temp;
//	printf("������ �ٲٱ��� �迭�� ���� \n");
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
//	printf("������ �ٲ��� �迭�� ���� \n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	_getch();
//
//}


//����ū�� ã��


int MaxVal(int *ptr, int len);

#define MAX(x,y) x > y ? x : y

int main(void)
{
	int arr[10];
	int i, max;
	printf("�迭�� ���� �Է��ϼ��� \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d��° ����� �� : ",i+1);
		scanf("%d", &arr[i]);
	}
	max = MaxVal(arr, sizeof(arr) / sizeof(int));
	printf("�ִ밪 : %d",max);
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