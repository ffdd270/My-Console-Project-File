#include <stdio.h>
#include <conio.h>

int main(void)
{
	printf("10진수 출력: %d \n", 1234);
	printf("8진수 출력: %o \n", 1234);
	printf("16진수 출력: %x \n", 1234);

	printf("실수형 출력: %f \n", 0.1234);
	printf("지수형 출력: %e \n", 0.1234);

	printf("문자 출력: %c \n", 'a');
	printf("문자열 출력: %s \n", "abcde");

	_getch();
	return 0;
}