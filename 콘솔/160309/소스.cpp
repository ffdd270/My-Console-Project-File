#include <stdio.h>
#include <conio.h>

int main(void)
{
	printf("10���� �ڸ����� ���� ��� %10d\n", 1234);
	printf("�� 10���� �ڸ��� ���� ���� %-10d\n", 1234);
	printf("���� ��� %-10d \n", -1234);
	printf("�� 10���� �ڸ��� ����� 0����: %010�� \n", 1234); //������

	printf("�Ǽ������� ���: %.2f \n", 0.1234);


    _getch();
	return 0;
}