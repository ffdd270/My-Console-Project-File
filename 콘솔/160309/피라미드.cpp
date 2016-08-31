#include <stdio.h>
#include <conio.h>

int main(void)
{
	int floor; // 피라미드의 층 입력
	int MAX = 1; //출력할 숫자의 갯수
	int LOOF = 0; //백키 
	
	printf("Plz Enter the floor. \n");
	scanf("%d", &floor);
	printf("\n");
	for (; floor > 0; floor--)
	{
		for (; LOOF>0; LOOF--)
		{
			printf("\b");
		}
		int i = 0;
		printf("\t\t\t\t");
		for (int b = 0; b<MAX; b++)
		{
			if (i > 9)
				i = 0;
			printf("%d",i);
			i++;
			LOOF++;
		}
		printf("\n");
		
		MAX += 2;
	}
	_getch();
	return 0;
}