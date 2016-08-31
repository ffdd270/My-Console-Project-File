#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int num1;
//	float num2;
//	char name;
//	char array[20];
//	printf("정수 입력: \n");
//	scanf("%d", &num1);
//
//	printf("실수 입력: \n");
//	scanf("%f", &num2);
//	RESET;
//
//	printf("문자 입력: \n");
//	scanf("%c", &name);
//	RESET;
//
//	printf("문자열 입력: \n");
//	scanf("%s", array);
//	RESET;
//
//	printf("정수 : %d \n 실수 %f \n 문자 %c \n 문자열 %s \n 가 입력 되었습니다.", num1, num2, name, array);
//	_getch();
//	return 0;
//}

//연습 1
//int main()
//{
//	float i, j,result=0;
//
//	scanf("%f%f", &i, &j);
//	result = i*j / 2;
//	printf("밑변: %f, 높이 %.2f, 넓이 : %.2f",i,j,result);
//	_getch();
//	return 0;
//}

//int main()
//{
//	int num;
//	printf("입력!");
//	scanf("%d", &num);
//	printf("%d", num - 10);
//	_getch();
//	return 0;
//}

//int main()
//{
//	float Half, Result, One; 
//	scanf("%f", &Half);
//	printf("넓이: %f, 원주 : %f", Half*Half*3.14, 2 * Half*3.14);
//	_getch();
//	return 0;
//}

int main()
{
	float num1, num2;
	printf("정수A: \n");
	scanf("%f", &num1);
	printf("정수B: \n");
	scanf("%f", &num2);
	printf("A의 값은 B의 %.f%% 입니다. ", num1 / num2 * 100);
	_getch();
	return 0;
}