#include <stdio.h>
#include <conio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int * ptr = arr;
	for (int i = 0; i < 5; i++)
		*(ptr + i) += 2;
	for (int i = 0; i < 5; i++)
		printf("%d ",*(ptr + i));
	
	_getch();
	return 0;
}