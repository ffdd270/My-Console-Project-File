#include <stdio.h>
#include <conio.h>

//���� 6

//int main()
//{
//	int a = 10;
//	printf("a = %d \n", a);
//	{
//		int a = 20;
//		printf("a = %d \n", a);
//	}
//	printf("a= %d \n", a);
//	_getch();
//}

//���� 7

//void out();
//int a;
//int main()
//{
//	a = 10;
//	printf("a = %d \n", a);
//	out();
//	_getch();
//}
//
//void out()
//{
//	printf("a = %d \n", a);
//}


//���� 8
//int a;
//int main()
//{
//	a = 10;
//	printf("a = %d \n", a);
//	{
//		int a = 20; //���������� ���������� �̸��� ���ٸ�, ���������� ������
//		printf("a = %d \n", a);
//	}
//	printf("a= %d \n", a);
//	_getch();
//}

//���� 9
//void func();
//int a;
//int main()
//{
//	a = 10;
//	printf("a = %d \n", a);
//	func();
//	printf("a = %d \n", a);
//}
//
//void func()
//{
//	int a = 20;
//	a++;
//}




//�������� 3
//int sum(int a, int b);
//int count = 0;
//
//int main()
//{
//	int num1, num2;
//	printf("�ΰ��� ���ڸ� ���ϴ� ���α׷�\n");
//	while (1)
//	{
//		printf("�� ���� ���� �Է�\n");
//		scanf("%d %d", &num1, &num2);
//		if (num1 == 0 && num2 == 0)
//		{
//			break;
//		}
//		printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
//	}
//	printf("�� ���� Ƚ�� : %dȸ",count);
//	_getch();
//}
//
//int sum(int a, int b)
//{
//	count++;
//	return a + b;
//}



void intro(void);
void input1(void);
int input2(int referee);
float cal(int referee);
void output(int sum, float avg);

int referee;
int point;
int total = 0;

int main()
{
	float avg;
	int sum;
	intro();
	input1();
	sum = input2(referee);
	avg = cal(referee);
	output(sum, avg);
	_getch();
}

void intro(void)
{
	printf("�ǰ� �������� ���� ��� ���α׷� \n");
	printf("������ ���� �Է��ϼ���.");
}

void input1(void)
{
	scanf("%d", &referee);
}

int input2(int referee)
{
	int low = 0;
	int high = 0;
	int temp = 0;
	int sum = 0;
	for (int i = 1; i <= referee; i++)
	{
		printf("%d �� ������ ����(0-10) : ",i);
		scanf("%d", &point);

		if (temp > point)
		{
			low = point;
		}

		else if (temp < point)
		{
			high = point;
		}

		temp = point;
		total += point;
	}
	sum = total;
	sum -= low;
	sum -= high; 
	return sum;
}

float cal(int referee)
{
	float avg;
	avg = total / (float)referee;
	return avg;
}

void output(int sum, float avg)
{
	printf("���� = %d ���� = %.2f", sum, avg);
}