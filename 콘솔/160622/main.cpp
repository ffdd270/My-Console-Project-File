#include <stdio.h>
#include <conio.h>
#include <string.h>

namespace H
{
	int strlen(char * dest)
	{
		int len = 0;
		for (int i = 0; dest[i] != '\0'; i++)
		{
			len++;
		}
		return len;
	}

	int strcpy(char * dest, char * source)
	{
		int len;

		len = strlen(dest);

		for (int i = 0; i < len; i++)
		{
			dest[i] = 0;
		}

		len = strlen(source);

		for (int i = 0; i < len; i++)
		{
			dest[i] = source[i];
		}
		return 0;
	}
}


//int main()
//{
//	char st[20];
//	int num;
//	strcpy(st, "I like C-Language.");
//	printf("%s",st);
//	for (num = 0; st[num] != '\0'; num++);
//	printf("No. of Charaters = %d", num);
//	_getch();
//}
//



//int main()
//{
//	char a[6];
//	static char b[] = { 'S', 'E', 'O', 'U', 'L', '\0' };
//	int i;
//	a[0] = 'K', a[1] = '0', a[2] = 'R';
//	a[3] = 'E', a[4] = 'A', a[5] = '\0';
//
//	for (i = 0; i < 6; i++)
//	{
//		printf("a[%d] = %c\n", i, a[i]);
//	}
//	printf("문자열(1) = %s \n", a);
//	printf("문자열(2) = %s \n", b);
//	_getch();
//}
//
//char a[] = "PAPER";
//int main()
//{
//	printf("a[] = %s \n", a);
//	printf("%c%c%c%c%c \n", a[0], a[1], a[2], a[3], a[4]);
//	_getch();
//}
//

#include <ctype.h>

//int main()
//{
//	char str[80];
//	int i;
//
//	printf("문자열 대문자 입력 \n");
//	gets(str);
//
//	printf("입력한 문자열 대문자 출력\n");
//	for (i = 0; str[i]; i++)
//	{
//		printf("%c", tolower(str[i]));
//	}
//
//	putchar('\n');
//	_getch();
//}

//int main()
//{
//	char str[] = "ABC";
//	printf("str = %s\n", str);
//
//	str[0] = '\0';
//
//	puts("문자열 str은 공문자열이 되었네요!");
//	printf("str=%s\n", str);
//
//	_getch();
//}
//
//#include <stdlib.h>
//
//int main()
//{
//	char str[50];
//
//	scanf("%s", str);
//
//	printf("처음 뵐께요, %s씨.", str);
//
//	_getch();
//}

//#define MAX(X,Y) X > Y ? X : Y 
//int main()
//{
//	char str[50];
//	int len;
//	char max;
//	printf("문자열 입력");
//	gets(str);
//	len = strlen(str);
//
//	for (int i = 0; i < len - 1; i++)
//	{
//		max = MAX(str[i], str[i + 1]);
//	}
//
//	printf("가장 아스키 코드가 큰 문자 : %c", max);
//	_getch();
//}

#include <Windows.h>

int main()
{
	int cnt = 0;
	char mes[] = "Si Hawn Ham";
	int len = strlen(mes);
	printf("전광판입니다. \n");

	while (1)
	{
		for (int i = cnt; mes[i] != '\0'; i++)
		{
			printf("%c", mes[cnt + i]);
		}

		for (int i = 0; i <= cnt; i++)
		{
			printf("%c", mes[i]);
		}

		Sleep(2000);
		
		system("cls");
		cnt++;
	}
}