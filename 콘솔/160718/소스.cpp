#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int arr[] = { 10, 20 };
//	int *p = arr;
//	int sum = (*p)++;
//	printf("%d", sum);
//}

void fct(int * arr2);

int main()
{
	int arr[2] = { 1, 2 };

	fct(arr);
	printf("%d \n", arr[0]);
	_getch();
	return 0;
}

void fct(int arr2[])
{
	printf("%d \n", arr2[0]);
	arr2[0] = 3;
}