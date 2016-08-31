#include <string.h>
#include <stdio.h>
#include <conio.h>

//int main()
//{
//	char a[20];
//	char b[20];
//	strcpy(a, "내이름은 함시환");
//	strcpy(b, "요요요용");
//	printf("%s %s", a,b);
//	_getch();
//}


//void BoxMessage(char * str);
//
//int main()
//{
//	BoxMessage("안녕 세상아?!!!!!!!!!!!!!!!!");
//	_getch();
//}
//
//void BoxMessage(char * str)
//{
//	int i, len;
//	len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//	printf("%s", str);
//	printf("\n");
//	for (int i = 0; i < len; i++)
//	{
//		printf("-");
//	}
//}

//int main()
//{
//	char First_Name[10] = "김";
//	char Last_Name[20] = "영하";
//	printf("%s%s\n", First_Name, Last_Name);
//	strcpy(First_Name, "이");
//	strcat(Last_Name, "선생님");
//	printf("%s%s\n", First_Name, Last_Name);
//	_getch();
//}

//int main()
//{
//	char Name1[30] = "김영하";
//	char Name2[30];
//	int i;
//	scanf("%s", Name2);
//	i = strcmp(Name1, Name2);
//	if (i == 0)
//	{
//		printf("두 문자열이 같습니다.");
//	}
//	else
//	{
//		printf("두 문자열이 다릅니다.");
//	}
//	_getch();
//}
//
//bool ThisStrIsRight(char * str1, char * str2);
//
//
//int main()
//{
//	char ID[40];
//	char PWD[30];
//
//	int i = 0;
//	while (i != 3)
//	{
//		printf("ID를 입력하세요. ");
//		scanf("%s", ID);
//		printf("Password를 입력하세요.");
//		scanf("%s", PWD);
//
//		if (ThisStrIsRight(ID, PWD))
//		{
//			printf("ㅎㅇㅎㅇ \n");
//		}
//
//		else
//		{
//			printf("누구세요? \n");
//			i++;
//		}
//		_getch();
//	}
//
//}
//
//bool ThisStrIsRight(char * str1, char * str2)
//{
//	if (!strcmp(str1, "nhy3795"))
//	{
//		if (!strcmp(str2, "Hello_World"))
//		{
//			return true;
//		}
//	}
//	return false;
//
//}

#include <stdlib.h>

int main()
{
	int k;
	int x = 1234;
	char str[30];
	itoa(x, str, 10);
	printf("%s",str);
	k = atoi(str);
	printf("%d", k);
	_getch();
}