#include <iostream>

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d �ȳ�-\n", i);
//	}
//	system("pause");
//}

//int main()
//{
//	for (char ch = 'A'; ch < 'Z'; ch++)
//	{
//		printf("%c ", ch); 
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int total7 = 0;
//	int total3 = 0;
//	int num;
//	printf("3�� ����� 7�� ��� ���� ����, 1���� ������ �� �߿�? :");
//
//	scanf("%d", &num);
//
//	for (int i = 1; i <= num; i++)
//	{
//		if (i % 3 == 0)
//		{
//			total3++;
//		}
//		if (i % 7 == 0)
//		{
//			total7++;
//		}
//	}
//	printf(" 3�� ��� %d��, 7�� ��� %d��,", total3, total7);
//
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int k;
//	for (int i = 0, j = 0; )
//}

//int main()
//{
//	int total7 = 0;
//	int total3 = 0;
//  int total = 0;
//	int num;
//	printf("3�� ����� 7�� ��� ���� ����, 1���� ������ �� �߿�? :");
//
//	scanf("%d", &num);
//
//	for (int i = 1; i <= num; i++)
//	{
//		if (i % 3 == 0)
//		{
//			total3 += i;
//		}
//		if (i % 7 == 0)
//		{
//			total7 += i;
//		}
//	}
//  total = total3 + total7;
//	printf(" 3�� ����� ���� : %d, 7�� ����� ���� : %d", total3, total7);
//
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int total7 = 0;
//	int total3 = 0;
//    int total = 0;
//	int num;
//	printf("3�� ����� 7�� ��� ���� ����, 1���� ������ �� �߿�? :");
//
//	scanf("%d", &num);
//
//	for (int i = 1; i <= num; i++)
//	{
//		if (i % 3 == 0)
//		{
//			total3 += i;
//		}
//		if (i % 7 == 0)
//		{
//			total7 += i;
//		}
//	}
//    total = total3 + total7;
//	printf(" 3�� ����� ���� : %d, 7�� ����� ���� : %d\n", total3, total7);
//	printf("3�� ����� 7�� ����� ��� ���Ѱ�? %d", total);
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int num1, num2;
//	int count = 0;
//	printf("�����! ���ϱ�! �����! (1���� 10000������ ����):");
//	scanf("%d %d", &num1, &num2);
//
//	for (int i = 1; i < 10000; i++)
//	{
//		if (i % num1 == 0 && i % num2 == 0)
//		{
//			printf("����� : %d \n", i );
//			count++;
//		}
//	}
//
//	if (count == 0)
//	{
//		printf("%d�� %d�� ������� �����ϴ�. ", num1, num2);
//	}
//
//	system("pause");
//	return 0;
//}

int main()
{
	int num1, num2;
	int bigger;
	printf("������� ���� �� ������ �Է���. :");
	scanf("%d %d", &num1, &num2);
	printf("����� : ");
	for (int i = 1; i < num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf(" %d", i);
		}
	}
	system("pause");
	return 0;
}