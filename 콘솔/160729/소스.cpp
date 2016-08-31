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
//		printf("이름, 전화번호, 주소순으로 입력: "); 
//		scanf("%s%s%s", &name[i][MODE_GETNAME], &name[i][MODE_GETPHONE], &name[i][MODE_GETPLACE]);
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("이름, 전화번호, 주소순으로 입력: \n");
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
//	printf("날짜를 입력해주세요\n");
//	printf("년 : ");
//	scanf("%d", &day.Year);
//	printf("월 : ");
//	scanf("%d", &day.Month);
//	printf("년 : ");
//	scanf("%d", &day.day);
//
//	printf("날짜 : %d년 %d월 %d일 \n", day.Year, day.Month, day.day);
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
//		printf("%d번째 학생의 이름을 입력하세요 : ");
//		scanf("%s", &grade[i].Name);
//		printf("학번을 입력하세요 : ");
//		scanf("%d", &grade[i].Number);
//		printf("국어점수를 입력하세요 : ");
//		scanf("%d", &grade[i].Korean);
//	}
//
//	printf("=========================================\n");
//	printf("%s%10s%10s\n", "학번", "이름", "국어성적");
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
//	struct person per = { "시환 함", "000321-3853619" };
//	per.inf = &pif;
//
//	printf("이름 : %s\n", per.name);
//	printf("주민 등록 번호 : %s\n", per.pID);
//	printf("주소 : %s\n", per.inf->addr);
//	printf("전화번호 : %s\n", per.inf->tel);
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
		printf("%d번째 학생의 이름을 입력하세요 : ");
		scanf("%s", &grade[i].Name);
		printf("학번을 입력하세요 : ");
		scanf("%d", &grade[i].Number);
		printf("국어점수를 입력하세요 : ");
		scanf("%d", &grade[i].Korean);
	}

	printf("=========================================\n");
	printf("%s%10s%10s\n", "학번", "이름", "국어성적");


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