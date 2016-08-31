#include <stdio.h>
#include <conio.h>

#define SQUARE(X,Y) X*Y 

int main()
{
	int num1, num2;
	printf("정수를 입력해주세요. \n");
	scanf("%d %d", &num1, &num2);
	printf("%d X %d = %d.",num1,num2,SQUARE(num1,num2));
	_getch();
	return 0;
}