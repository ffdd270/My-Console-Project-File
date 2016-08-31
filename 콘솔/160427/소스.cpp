#include <iostream>

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d 안녕-\n", i);
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
//	printf("3의 배수와 7의 배수 개수 세기, 1부터 어디까지 수 중에? :");
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
//	printf(" 3의 배수 %d개, 7의 배수 %d개,", total3, total7);
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
//	printf("3의 배수와 7의 배수 개수 세기, 1부터 어디까지 수 중에? :");
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
//	printf(" 3의 배수의 총합 : %d, 7의 배수의 총합 : %d", total3, total7);
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
//	printf("3의 배수와 7의 배수 개수 세기, 1부터 어디까지 수 중에? :");
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
//	printf(" 3의 배수의 총합 : %d, 7의 배수의 총합 : %d\n", total3, total7);
//	printf("3의 배수와 7의 배수가 모두 합한건? %d", total);
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int num1, num2;
//	int count = 0;
//	printf("공배수! 구하기! 공배수! (1부터 10000까지의 수만):");
//	scanf("%d %d", &num1, &num2);
//
//	for (int i = 1; i < 10000; i++)
//	{
//		if (i % num1 == 0 && i % num2 == 0)
//		{
//			printf("공배수 : %d \n", i );
//			count++;
//		}
//	}
//
//	if (count == 0)
//	{
//		printf("%d와 %d의 공배수는 없습니다. ", num1, num2);
//	}
//
//	system("pause");
//	return 0;
//}

int main()
{
	int num1, num2;
	int bigger;
	printf("공약수를 구할 두 정수를 입력해. :");
	scanf("%d %d", &num1, &num2);
	printf("공약수 : ");
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