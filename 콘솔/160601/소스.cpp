#include <string.h>
#include <stdio.h>
#include <conio.h>

//int main()
//{
//	char a[20];
//	char b[20];
//	strcpy(a, "���̸��� �Խ�ȯ");
//	strcpy(b, "�����");
//	printf("%s %s", a,b);
//	_getch();
//}


//void BoxMessage(char * str);
//
//int main()
//{
//	BoxMessage("�ȳ� �����?!!!!!!!!!!!!!!!!");
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
//	char First_Name[10] = "��";
//	char Last_Name[20] = "����";
//	printf("%s%s\n", First_Name, Last_Name);
//	strcpy(First_Name, "��");
//	strcat(Last_Name, "������");
//	printf("%s%s\n", First_Name, Last_Name);
//	_getch();
//}

//int main()
//{
//	char Name1[30] = "�迵��";
//	char Name2[30];
//	int i;
//	scanf("%s", Name2);
//	i = strcmp(Name1, Name2);
//	if (i == 0)
//	{
//		printf("�� ���ڿ��� �����ϴ�.");
//	}
//	else
//	{
//		printf("�� ���ڿ��� �ٸ��ϴ�.");
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
//		printf("ID�� �Է��ϼ���. ");
//		scanf("%s", ID);
//		printf("Password�� �Է��ϼ���.");
//		scanf("%s", PWD);
//
//		if (ThisStrIsRight(ID, PWD))
//		{
//			printf("�������� \n");
//		}
//
//		else
//		{
//			printf("��������? \n");
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