#include <stdio.h>
#include <conio.h>

//int main()
//{
//	char str[100];
//	int idx = 0;
//	printf("���ڿ� �Է� : ");
//	scanf("%s", str);
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (!(str[i] >= '0' && str[i] <= '9'))
//		{
//			str[idx] = str[i];
//			idx++;
//		}
//	}
//	str[idx] = '\0';
//	printf("���� ���� ���� �Ϸ� \n");
//	printf("str = %s", str);
//	_getch();
//}

//int main()
//{
//	char str[28] = { 0 };
//	int i;
//	int idx = 0;
//	for (i = 'A'; i <= 'Z'; i++)
//	{
//		str[idx] = 'A' + idx;
//		idx++;
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j <26; j++)
//		{
//			printf("%c", str[j]);
//		}
//		printf("\n");
//	}
//	_getch();
//}

//int main()
//{
//	char str[28] = { 0 };
//	int i;
//	int idx = 0;
//	for (i = 'A'; i <= 'Z'; i++)
//	{
//		str[idx] = 'A' + idx;
//		idx++;
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%c", str[j]);
//		}
//		printf("\n");
//	}
//	_getch();
//}

//int main()
//{
//	char str[28] = { 0 };
//	int i;
//	int idx = 0;
//	for (i = 'A'; i <= 'Z'; i++)
//	{
//		str[idx] = 'A' + idx;
//		idx++;
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		for (int j = i; j < 26; j++)
//		{
//			printf("%c", str[j]);
//		}
//		for (int j = 0; j < i; j++)
//		{
//			printf("%c", str[j]);
//		}
//		printf("\n");
//	}
//	_getch();
//} 


//int main()
//{
//	FILE * fp;
//	fp = fopen("test.txt", "w");
//	char str[1000] = { 0 };
//	int ABC[26] = { 0 }; //���� ����.
//	int len;
//	char input;
//	printf("�빮�ڸ� �Է��ض�. ����� ����� - Z\n");
//	for (int i = 0;; i++)
//	{
//		input = getchar();
//		if (input == EOF)
//		{
//			str[i] = '\0';
//			break;
//		}
//		else
//		{
//			str[i] = input;
//		}
//	}
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			for (int j = 0; j < 26; j++)
//			{
//				if (str[i] == 'A' + j)
//				{
//					ABC[j]++;
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (ABC[i] != 0)
//		{
//			printf("%c�� �Էµ� Ƚ���� %d�Դϴ�.", 'A' + i, ABC[i]);
//			printf("\n");
//		}
//	}
//	fputs(str, fp);
//
//	_getch();
//}

#include <string.h>
#include <stdlib.h>




int main()
{
	FILE * fp = NULL;
	char FileName[50];
	char str[1000] = { 0 };
	int ABC[26] = { 0 }; //���� ����.
	int len;
	char input;

	printf("�����̸� �Է�!\n");
	gets(FileName);

	fp = fopen(FileName, "w");


	printf("�빮�ڸ� �Է��ض�. ����� ����� - Z\n");

	for (int i = 0;; i++)
	{
		input = getchar();
		if (input == EOF)
		{
			str[i] = '\0';
			break;
		}
		else
		{
			str[i] = input;
		}
	}
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			for (int j = 0; j < 26; j++)
			{
				if (str[i] == 'A' + j)
				{
					ABC[j]++;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (ABC[i] != 0)
		{
			printf("%c�� �Էµ� Ƚ���� %d�Դϴ�.", 'A' + i, ABC[i]);
			printf("\n");
		}
	}
	fputs(str, fp);

	_getch();
}
