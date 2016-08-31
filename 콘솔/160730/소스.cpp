#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
//typedef struct point
//{
//	int x, y;
//};
//
//typedef struct circle
//{
//	point p;
//	double radius;
//};
//
//int main()
//{
//	circle c1 = { 10, 10, 4 };
//	circle c2 = { 20, 20, 5 };
//
//	printf("[circle1] \n");
//	printf("x : %d, y : %d \n", c1.p.x, c1.p.y);
//	printf("radius = %lf\n", c1.radius);
//
//	printf("[circle2] \n");
//	printf("x : %d, y : %d \n", c2.p.x, c2.p.y);
//	printf("radius = %lf\n", c2.radius);
//
//	_getch();
//}

//typedef struct _Lang
//{
//	int Kor, Eng;
//}Lang;
//
//typedef struct _Student
//{
//	char name[20];
//	Lang Languge;
//	int Society;
//	int Music;
//	int Sum;
//	float Avg;
//}Student;
//
//int main()
//{
//	Student Students[40];
//	double classAvg = 0;
//	for (int i = 0; i < 39; i++)
//	{
//		Students[i].Languge.Eng = rand() % 100;
//		Students[i].Languge.Kor = rand() % 100;
//		Students[i].Music = rand() % 100;
//		Students[i].Society = rand() % 100;
//		Students[i].Sum = (double)Students[i].Languge.Eng + (double)Students[i].Languge.Kor + (double)Students[i].Music + (double)Students[i].Society;
//		classAvg += Students[i].Sum / 4;
//	}
//	printf("본인의 이름을 적으시오.");
//	scanf("%s", Students[39].name);
//	printf("국어 성적을 적으시오.");
//	scanf("%d", &Students[39].Languge.Kor);
//	printf("영어 성적을 적으시오.");
//	scanf("%d", &Students[39].Languge.Eng);
//	printf("사회 성적을 적으시오.");
//	scanf("%d", &Students[39].Society);
//	printf("음악 성적을 적으시오.");
//	scanf("%d", &Students[39].Music);
//
//	Students[39].Sum = (double)Students[39].Languge.Eng + (double)Students[39].Languge.Kor + (double)Students[39].Music + (double)Students[39].Society;
//	Students[39].Avg = Students[39].Sum / 4;
//	classAvg += (double)Students[39].Sum;
//	classAvg /= 40;
//	printf("[%s]는 반평균 점수보다 과목 평균 점수가 %lf점 더 높습니다.",Students[39].name,Students[39].Avg - classAvg);
//
//	_getch();
//}

//
//typedef struct _Node
//{
//	int  number;
//	char name[15];
//	struct _Node * next;
//}Node;
//
//void print_list(Node *);
//int main()
//{
//	Node Person[3] = { { 1, "캉승묵" }, { 2, "강제권" }, { 3, "하나고" } };
//	for (int i = 0; i < 2; i++)
//	{
//		Person[i].next = &Person[i + 1];
//	}
//	print_list(Person);
//	_getch();
//}
//
//void print_list(Node * Nptr)
//{
//	while (Nptr != NULL)
//	{
//		printf("%s , %d \n", Nptr->name, Nptr->number);
//		Nptr = Nptr->next;
//	}
//}


//
//typedef struct _DATA
//{
//	int front;
//	int number;
//}DATA;
//
//int main()
//{
//	DATA * datum;
//	int i, j;
//	int height;
//	printf("출력될 삼각형의 높이를 입력하세요 : ");
//	scanf("%d", &height);
//	datum = (DATA *)malloc(sizeof(DATA)* height);
//	for (int i = 0; i < height; i++)
//	{
//		datum[i].front = height - i + 1;
//		datum[i].number = 1 + (i * 2);
//	}
//
//	for (int i = 0; i < height; i++)
//	{
//		for (int j = 0; j < datum[i].front; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < datum[i].number; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	_getch();
//}

typedef struct _tagQustion
{
	char * Qt; //질문
	char *Case[3]; //문재
	int Answer;
	bool Used;
}qustion;

qustion qe[] =
{ 
	{ "C++에서 허용되지 않는 형식은? ", "1. void Print(const char *,...)", "2. main()", "3. char **** ppppointer.", 2, false },
	{ "VS에서 하면 안되는 일은? #include <stdio.h>가 되었다고 가정.", "1.void printf()", "2.void mian()", "3.void 안녕디지몬()",1 ,false },
	{ "다음 타입중 기본형이 아닌 것은", "1.정수형", "2.배열", "3.문자형", 2, false },
	{ "다음 중 가장 크기가 큰 타입은", "1.int", "2.double", "3.char", 2, false },
	{ "열거형을 선언할 때 사용하는 키워드는", "1.enum", "2.alias", "3.define", 1, false },
	{ "다음 중 단항 연산자는", "1.++", "2.?", "3.=", 1, false },
	{ "문자 배열의 내용을 바꿀 때 사용하는 함수는", "1.strassign", "2.strmove", "3.strcpy", 3, false },
	{ "구조체의 멤버를 읽을 때 사용하는 연산자는", "1.->", "2.*", "3..", 3, false },
	{ "정수형 타입이 아닌 것은", "1.unsigned", "2.short", "3.float", 3, false },
	{ "Win32 Api 프로그래밍에서 반드시 필요한 함수는", "1.entry", "2.main", "3.WinMain", 3, false },
};


int main()
{
	int input;
	int random;
	int win = 0;
	srand((int)time(NULL));
	random = rand() % 10;
	printf("정말 예쁜 퀴즈 프로그램 \n");
	_getch();

	for (int i = 0; i < 5; i++)
	{
		while (qe[random].Used != false)
		{
			random = rand() % 10;
		}

		printf("%s\n\n%s\n\n%s\n\n%s\n", qe[random].Qt, qe[random].Case[0], qe[random].Case[1], qe[random].Case[2]);
		scanf("%d", &input);
		if (input == qe[random].Answer)
		{
			win++;
			printf("이겼습니다. %d승.", win);
			_getch();
		}
		else
		{
			printf("틀렸습니다. %d승", win);
			_getch();
		}
		qe[random].Used = true;
		system("cls");
	}
	printf("수고 하셨습니다. %d승. ", win);
	_getch();
}