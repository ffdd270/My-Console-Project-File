#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int num1;
//	float num2;
//	char name;
//	char array[20];
//	printf("���� �Է�: \n");
//	scanf("%d", &num1);
//
//	printf("�Ǽ� �Է�: \n");
//	scanf("%f", &num2);
//	RESET;
//
//	printf("���� �Է�: \n");
//	scanf("%c", &name);
//	RESET;
//
//	printf("���ڿ� �Է�: \n");
//	scanf("%s", array);
//	RESET;
//
//	printf("���� : %d \n �Ǽ� %f \n ���� %c \n ���ڿ� %s \n �� �Է� �Ǿ����ϴ�.", num1, num2, name, array);
//	_getch();
//	return 0;
//}

//���� 1
//int main()
//{
//	float i, j,result=0;
//
//	scanf("%f%f", &i, &j);
//	result = i*j / 2;
//	printf("�غ�: %f, ���� %.2f, ���� : %.2f",i,j,result);
//	_getch();
//	return 0;
//}

//int main()
//{
//	int num;
//	printf("�Է�!");
//	scanf("%d", &num);
//	printf("%d", num - 10);
//	_getch();
//	return 0;
//}

//int main()
//{
//	float Half, Result, One; 
//	scanf("%f", &Half);
//	printf("����: %f, ���� : %f", Half*Half*3.14, 2 * Half*3.14);
//	_getch();
//	return 0;
//}

int main()
{
	float num1, num2;
	printf("����A: \n");
	scanf("%f", &num1);
	printf("����B: \n");
	scanf("%f", &num2);
	printf("A�� ���� B�� %.f%% �Դϴ�. ", num1 / num2 * 100);
	_getch();
	return 0;
}