#include <stdio.h>
#include <conio.h>
//
//int main()
//{
//	char Char1, Char2, Char3;
//	printf("�Է� : ");
//	scanf("%c %c", &Char1, &Char2);
//	Char3 = (Char1 + Char2) / 2;
//	printf("�߽� : %c", Char3);
//	_getch();
//	return 0;
//}
//


//JFF /Just For Fun
//
//int main()
//{
//	char ch1[30];
//	int i = 0;
//	char ch2;
//	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
//	{
//		ch1[i] = ch2;
//		i++;
//	}
//
//	for (i = 1; i < 27; i++)
//	{
//		for (int j = 0; j < 27-i; j++)
//		{
//			printf(" ");
//		}
//
//		for (int n = 0; n < i; n++)
//		{
//			printf("%c", ch1[n]);
//		}
//
//		for (int n = 0; n < i-1; n++)
//		{
//			printf("%c", ch1[n]);
//		}
//		printf("\n");
//	}
//	_getch();
//	return 0;
//}

//int main()
//{
//	printf(" TTTTTTT   H    H  EEEEEE");
//	printf("    T      H    H E");
//	printf("    T      HHHHHH  EEEEEE");
//	printf("    T      H    H  E");
//	printf("    T      H    H  EEEEEE");
//	printf("");
//	printf("");
//
//}

//NJFF //Not Just For Fun

//int main()
//{
//	int n;
//	printf("�Է� : ");
//	scanf("%d", &n); 
//	printf("ó�� : 0x%x, %d\n",n,n);
//	n = ~n;
//	printf("ó�� : 0x%x, %d",n,n);
//	_getch();
//	return 0;
//}

//int main()
//{
//	int n, first, mid, last,total;
//	printf("�Է� : ");
//	scanf("%d", &n);
//	first = n / 100;
//	mid = (n % 100) / 10;
//	last = n % 10;
//	total = first + mid + last;
//	printf("��� : %d",total);
//	_getch();
//	return 0;
//}

//int main()
//{
//	int input, nam, num1;
//	printf("�Է� :");
//	scanf("%d", &input);
//	num1 = input / 5;
//	nam = input-(num1 * 5);
//	printf("�� : %d \n ������ : %d", num1, nam);
//	_getch();
//	return 0;
//}
//
//int main()
//{
//	int mode;
//
//	printf("������ �ϳ� �Է��ϼ���\n");
//	scanf("%d", &mode);
//	if (mode >= 0)
//	{
//		printf("���");
//	}
//	else
//	{
//		printf("����");
//	}
//	_getch();
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	printf("���� 3�� �Է� : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("���� ū �� : %d\n", a);
//		}
//		else
//		{
//			printf("���� ū �� : %d\n", c);
//		}
//	}
//
//	else
//	{
//		if (b > c)
//		{
//			printf("���� ū �� : %d\n", b);
//		}
//		else
//		{
//			printf("���� ū �� : %d\n", c);
//		}
//	}
//	_getch();
//	return 0;
//}

//2-1 48
//int main()
//{
//	int a, b, c;
//	printf("������ ������ �Է����ּ��� \n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b && b == c && c == a)
//	{
//		printf("A,B,C�� ���� ��� �����ϴ�.");
//	}
//	else if (a == b || b == c || c == a)
//	{
//		printf("A,B,C�� �ΰ��� ���� �����ϴ�.");
//	}
//	else
//	{
//		printf("��� �۷� �Ծ����ϴ�.");
//	}
//	_getch();
//	return 0;
//}

//2-2 48p
//int main()
//{
//	int a, b, c;
//	printf("������ ������ �Է����ּ��� \n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b && b == c && c == a)
//	{
//		printf("A,B,C�� ���� ��� �����ϴ�.");
//	}
//
//	else if (a == b || b == c || c == a)
//	{
//		if (a == b)
//		{
//			printf("ABC�� A,B�� ���� ���ƿ�.");
//		}
//		else if (b == c)
//		{
//			printf("ABC�� B,C�� ���� ���ƿ�.");
//		}
//		else
//		{
//			printf("ABC�� A,C�� ���� ���ƿ�.");
//		}
//	}
//
//	else
//	{
//		printf("��� �۷� �Ծ����ϴ�.");
//	}
//	_getch();
//	return 0;
//}

//2-3 48p
//int main()
//{
//	int num1, num2;
//	char ch1;
//	float result;
//	scanf("%d %c %d", &num1, &ch1, &num2);
//	if (ch1 == '+')
//	{
//		result = num1 + num2;
//	}
//
//	else if (ch1 == '-')
//	{
//		result = num1 - num2;
//	}
//
//	else if (ch1 == '*')
//	{
//		result = num1 * num2;
//	}
//
//	else
//	{
//		result = num1 / num2;
//	}
//
//	printf("result = %.1f", result);
//	_getch();
//	return 0;
//}

//2-4 49
//int main()
//{
//	int num1;
//	printf("���� �̿��Ͽ� �����̳� ������, ��.\n");
//	printf("��� ? :");
//	scanf("%d", &num1); //num1�Է�
//
//	if (num1 >= 3 && num1 <= 5) //num1�� 3���� ũ�ų� ���� 5���� �۰ų� ������ ���
//	{
//		printf("���� �Ծ��~");
//	}
//
//	else if (num1 >= 6 && num1 <= 8) //num1�� 6���� ũ�ų� ���� 8���� �۰ų� ������ ���
//	{
//		printf("������ �Ծ��~");
//	}
//
//	else if (num1 >= 9 && num1 <= 11) //num1�� 9���� ũ�ų� ����, 11���� �۰ų� ������ ���
//	{
//		printf("������ �Ծ��~");
//	}
//
//	else if (num1 <= 12 && num1 >= 1) //num1�� 12���� �۰ų� ����, 1���� ũ�ų� ������ ���. ���� ��� ������ �н��Ǿ��� ������ ��ü Ž��.
//	{
//		printf("�ܿ��� �Ծ��~");
//	}
//
//	else //�� ������ �� �������� �ʴ� ���� ��� ���� //13�̻�
//	{
//		//�ø�Ǫ�� ���
//		printf("TTTTTTTTTT       IIIIIIIIIII\n");
//		printf("    TT                II\n");
//		printf("    TT                II\n");
//		printf("    TT                II\n");
//		printf("TTTTTTTTT        IIIIIIIIIII\n");
//		printf("\a\a\a\a\a\a\a\a\a\a\a\a����� �� ġ��?");
//	}
//	_getch();
//
//	return 0;
//
//}

//2-5 49p
//int main()
//{
//	int age;
//	char ch;
//	printf("������ �Է��ϼ��� (���ڴ� M,���ڴ� F)\n");
//	scanf("%c", &ch);
//	printf("���̸� �Է��ϼ���:");
//	scanf("%d", &age);
//	if (ch == 'm')
//	{
//		if (age < 18)
//		{
//			printf("���� :����  �̼�����");
//		}
//		else
//		{
//			printf("���� :���� ����");
//		}
//	}
//
//	else if (ch == 'f')
//	{
//		if (age < 18)
//		{
//			printf("���� :����  �̼�����");
//		}
//		else
//		{
//			printf("���� :���� ����");
//		}
//	}
//	else
//	{
//		printf("���� �Դϴ�.");
//	}
//	_getch();
//	return 0;
//}

//�������� 2
//int main()
//{
//	int num1, num2;
//	printf("�ΰ��� ������ �Է����ּ��� \n");
//	printf("����1 :");
//	scanf("%d", &num1);
//	printf("����2 :");
//	scanf("%d", &num2);
//
//	if (num1 > num2)
//	{
//		printf("A�� B���� Ů�ϴ�.");
//	}
//
//	else if (num1 < num2)
//	{
//		printf("B�� A���� Ů�ϴ�.");
//	}
//
//	else
//	{
//		printf("A�� B�� �����ϴ�..");
//	}
//	_getch();
//	return 0;
//}

//����4 p51
#include <time.h>
#include <stdlib.h>

int main()
{
	int num;


	printf("0~2���̿� ���� �߻� ���� \n");
	srand((int)time(NULL));
	num = rand() % 3;

	switch (num)
	{
	case 0:
		puts("0");
		break;
	case 1:
		puts("1");
		break;
	case 2:
		puts("2");
		break;
	default:
		puts("���");
		break;
	}
	_getch();
	return 0;
}