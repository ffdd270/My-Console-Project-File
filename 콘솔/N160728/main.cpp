#include <stdio.h>
#include <conio.h>

////enum color { RED = 1, GREEN = 3, BLUE = 5 };
////
////int main()
////{
////	enum color c1 = RED;
////	enum color c2 = GREEN;
////	enum color c3 = BLUE;
////
////	printf("열거형 변수 출력 : %d %d %d\n", c1, c2, c3);
////	printf("상수 출력 : %d %d %d \n", RED, GREEN, BLUE);
////
////	_getch();
////}
//
//
//enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};
//
//int main()
//{
//	int day;
//	printf("input a day (0 : Monday ~ 6 : Sunday) : ");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case MON:
//		printf("수영을 하렴 \n");
//		break;
//	case TUE:
//		break;
//	case WED:
//		break;
//	case THU:
//		break;
//	case FRI:
//		break;
//	case SAT:
//		break;
//	case SUN:
//		break;
//	default:
//		break;
//	}
//	_getch();
//
//}



//typedef enum SU {ZERO, ONE, TWO, THREE, FOUR, FIVE} SU;
//enum TEST { AA, BB = 5, CC, DD = 3, EE, FF };
//
//int main()
//{
//	int i;
//	SU ss;
//	ss = FIVE;
//
//	printf("ss = %d \n", ss);
//	for (i = ZERO; i <= FIVE; i++)
//	{
//		printf("%5d ", i);
//	}
//	printf("\n");
//	for (i = AA; i <= DD; i++)
//	{
//
//	}
//}


//struct tagGrade
//{
//	char name[20];
//	int Number;
//	int Korean;
//	int English;
//	int Math;
//};
//
//void main()
//{
//	struct tagGrade Grade;
//	printf("구조체의 맴버변수 : char name[20] : %d \n", sizeof(Grade.name));
//	printf("구조체의 맴버변수 : Korean : %d \n", sizeof(Grade.Korean));
//	printf("구조체의 맴버변수 : English : %d \n", sizeof(Grade.English));
//	printf("구조체의 맴버변수 : Math : %d \n", sizeof(Grade.Math));
//	printf("구조체의 맴버변수 : Number : %d \n", sizeof(Grade.Number));
//	printf("구조체 : %d \n", sizeof(Grade));
//	_getch();
//}


//typedef struct Empolyee
//{
//	char name[40];
//	char Numner[40];
//	int YearPay;
//}Emoplyee;
//
//int main()
//{
//	Emoplyee Me;
//	printf("입력 : \n");
//	printf("이름 : ");
//	gets(Me.name);
//	printf("주민 등록 번호  : ");
//	gets(Me.Numner);
//	printf("연봉 : ");
//	scanf("%d", &Me.YearPay);
//	printf("출력 \n");
//	printf("이름 : ");
//	puts(Me.name);
//	printf("주민 등록 번호  : ");
//	puts(Me.Numner);
//	printf("연봉 : ");
//	printf("%d", Me.YearPay);
//	_getch();
//}


typedef struct Grade
{
	char Name[20];
}