#include <stdio.h>
#include <conio.h>

int main(void)
{
	printf("10개의 자리수로 정수 출력 %10d\n", 1234);
	printf("총 10갱의 자리중 왼쪽 정력 %-10d\n", 1234);
	printf("음수 출력 %-10d \n", -1234);
	printf("총 10개의 자리중 빈곳은 0으로: %010ㅇ \n", 1234); //정수형

	printf("실수형으로 출력: %.2f \n", 0.1234);


    _getch();
	return 0;
}