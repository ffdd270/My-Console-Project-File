#include <stdio.h>
#include <conio.h>

//#define MODE_GETNAME 0
//#define MODE_GETPHONE 100
//#define MODE_GETPLACE 200
//
//int main()
//{
//	char name[3][300] = { 0 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸�, ��ȭ��ȣ, �ּҼ����� �Է�: "); 
//		scanf("%s%s%s", &name[i][MODE_GETNAME], &name[i][MODE_GETPHONE], &name[i][MODE_GETPLACE]);
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸�, ��ȭ��ȣ, �ּҼ����� �Է�: \n");
//		printf("%s\n", &name[i][MODE_GETNAME]);
//		printf("%s\n", &name[i][MODE_GETPHONE]);
//		printf("%s\n", &name[i][MODE_GETPLACE]);
//	}
//
//	_getch();
//}

//typedef struct Day
//{
//	int Year;
//	int Month;
//	int day;
//};
//
//int main()
//{
//	Day day;
//	printf("��¥�� �Է����ּ���\n");
//	printf("�� : ");
//	scanf("%d", &day.Year);
//	printf("�� : ");
//	scanf("%d", &day.Month);
//	printf("�� : ");
//	scanf("%d", &day.day);
//
//	printf("��¥ : %d�� %d�� %d�� \n", day.Year, day.Month, day.day);
//	_getch();
//}

//typedef struct _Grade
//{
//	char Name[20];
//	int Number;
//	int Korean;
//}Grade;
//
//int ShowTable(Grade grade);
//
//int main()
//{
//	Grade grade[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d��° �л��� �̸��� �Է��ϼ��� : ");
//		scanf("%s", &grade[i].Name);
//		printf("�й��� �Է��ϼ��� : ");
//		scanf("%d", &grade[i].Number);
//		printf("���������� �Է��ϼ��� : ");
//		scanf("%d", &grade[i].Korean);
//	}
//
//	printf("=========================================\n");
//	printf("%s%10s%10s\n", "�й�", "�̸�", "�����");
//	for (int i = 0; i < 3; i++)
//	{
//		ShowTable(grade[i]);
//	}
//	printf("=========================================\n");
//	_getch();
//}
//
//
//int ShowTable(Grade grade)
//{
//	printf("%d%10s%10d\n", grade.Number, grade.Name, grade.Korean);
//	return 0;
//}

//
//struct perinfo
//{
//	char addr[20];
//	char tel[20];
//};
//
//struct person
//{
//	char name[20];
//	char pID[20];
//	struct perinfo * inf;
//};
//
//int main()
//{
//	struct perinfo pif = { "Korea, Seoul.", "010-..409.1644" };
//	struct person per = { "��ȯ ��", "000321-3853619" };
//	per.inf = &pif;
//
//	printf("�̸� : %s\n", per.name);
//	printf("�ֹ� ��� ��ȣ : %s\n", per.pID);
//	printf("�ּ� : %s\n", per.inf->addr);
//	printf("��ȭ��ȣ : %s\n", per.inf->tel);
//
//	_getch();
//}

typedef struct _Grade
{
	char Name[20];
	int Number;
	int Korean;
}Grade;

int ShowTable(Grade * grade);

int main()
{
	Grade grade[3];

	for (int i = 0; i < 3; i++)
	{
		printf("%d��° �л��� �̸��� �Է��ϼ��� : ");
		scanf("%s", &grade[i].Name);
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &grade[i].Number);
		printf("���������� �Է��ϼ��� : ");
		scanf("%d", &grade[i].Korean);
	}

	printf("=========================================\n");
	printf("%s%10s%10s\n", "�й�", "�̸�", "�����");


	ShowTable(grade);

	printf("=========================================\n");
	_getch();
}


int ShowTable(Grade * grade)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d%10s%10d\n", grade[i].Number, grade[i].Name, grade[i].Korean);
	}
	return 0;
}