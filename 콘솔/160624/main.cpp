#include <stdio.h>
#include <conio.h>

//int main()
//{
//	char str[100];
//	int idx = 0;
//	printf("문자열 입력 : ");
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
//	printf("숫자 문자 제거 완료 \n");
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
//	int ABC[26] = { 0 }; //숫자 들어갈곳.
//	int len;
//	char input;
//	printf("대문자만 입력해라. 종료는 컨드롤 - Z\n");
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
//			printf("%c의 입력된 횟수는 %d입니다.", 'A' + i, ABC[i]);
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
	int ABC[26] = { 0 }; //숫자 들어갈곳.
	int len;
	char input;

	printf("파일이름 입력!\n");
	gets(FileName);

	fp = fopen(FileName, "w");


	printf("대문자만 입력해라. 종료는 컨드롤 - Z\n");

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
			printf("%c의 입력된 횟수는 %d입니다.", 'A' + i, ABC[i]);
			printf("\n");
		}
	}
	fputs(str, fp);

	_getch();
}
