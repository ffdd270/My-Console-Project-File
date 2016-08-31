#include <stdio.h>
#include <conio.h>
//
//int main()
//{
//	char Char1, Char2, Char3;
//	printf("입력 : ");
//	scanf("%c %c", &Char1, &Char2);
//	Char3 = (Char1 + Char2) / 2;
//	printf("중심 : %c", Char3);
//	_getch();
//	return 0;
//}
//


//JFF /Just For Fun
//
//int main()
//{
//	char ch1[30];
//	int i = 0;
//	char ch2;
//	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
//	{
//		ch1[i] = ch2;
//		i++;
//	}
//
//	for (i = 1; i < 27; i++)
//	{
//		for (int j = 0; j < 27-i; j++)
//		{
//			printf(" ");
//		}
//
//		for (int n = 0; n < i; n++)
//		{
//			printf("%c", ch1[n]);
//		}
//
//		for (int n = 0; n < i-1; n++)
//		{
//			printf("%c", ch1[n]);
//		}
//		printf("\n");
//	}
//	_getch();
//	return 0;
//}

//int main()
//{
//	printf(" TTTTTTT   H    H  EEEEEE");
//	printf("    T      H    H E");
//	printf("    T      HHHHHH  EEEEEE");
//	printf("    T      H    H  E");
//	printf("    T      H    H  EEEEEE");
//	printf("");
//	printf("");
//
//}

//NJFF //Not Just For Fun

//int main()
//{
//	int n;
//	printf("입력 : ");
//	scanf("%d", &n); 
//	printf("처음 : 0x%x, %d\n",n,n);
//	n = ~n;
//	printf("처음 : 0x%x, %d",n,n);
//	_getch();
//	return 0;
//}

//int main()
//{
//	int n, first, mid, last,total;
//	printf("입력 : ");
//	scanf("%d", &n);
//	first = n / 100;
//	mid = (n % 100) / 10;
//	last = n % 10;
//	total = first + mid + last;
//	printf("출력 : %d",total);
//	_getch();
//	return 0;
//}

//int main()
//{
//	int input, nam, num1;
//	printf("입력 :");
//	scanf("%d", &input);
//	num1 = input / 5;
//	nam = input-(num1 * 5);
//	printf("몫 : %d \n 나머지 : %d", num1, nam);
//	_getch();
//	return 0;
//}
//
//int main()
//{
//	int mode;
//
//	printf("정수를 하나 입력하세요\n");
//	scanf("%d", &mode);
//	if (mode >= 0)
//	{
//		printf("양수");
//	}
//	else
//	{
//		printf("음수");
//	}
//	_getch();
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	printf("정수 3개 입력 : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("가장 큰 값 : %d\n", a);
//		}
//		else
//		{
//			printf("가장 큰 값 : %d\n", c);
//		}
//	}
//
//	else
//	{
//		if (b > c)
//		{
//			printf("가장 큰 값 : %d\n", b);
//		}
//		else
//		{
//			printf("가장 큰 값 : %d\n", c);
//		}
//	}
//	_getch();
//	return 0;
//}

//2-1 48
//int main()
//{
//	int a, b, c;
//	printf("새개의 정수를 입력해주세요 \n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b && b == c && c == a)
//	{
//		printf("A,B,C의 값이 모두 같습니다.");
//	}
//	else if (a == b || b == c || c == a)
//	{
//		printf("A,B,C중 두개의 값이 같습니다.");
//	}
//	else
//	{
//		printf("모두 글러 먹었습니다.");
//	}
//	_getch();
//	return 0;
//}

//2-2 48p
//int main()
//{
//	int a, b, c;
//	printf("새개의 정수를 입력해주세요 \n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a == b && b == c && c == a)
//	{
//		printf("A,B,C의 값이 모두 같습니다.");
//	}
//
//	else if (a == b || b == c || c == a)
//	{
//		if (a == b)
//		{
//			printf("ABC중 A,B의 값이 같아요.");
//		}
//		else if (b == c)
//		{
//			printf("ABC중 B,C의 값이 같아요.");
//		}
//		else
//		{
//			printf("ABC중 A,C의 값이 같아요.");
//		}
//	}
//
//	else
//	{
//		printf("모두 글러 먹었습니다.");
//	}
//	_getch();
//	return 0;
//}

//2-3 48p
//int main()
//{
//	int num1, num2;
//	char ch1;
//	float result;
//	scanf("%d %c %d", &num1, &ch1, &num2);
//	if (ch1 == '+')
//	{
//		result = num1 + num2;
//	}
//
//	else if (ch1 == '-')
//	{
//		result = num1 - num2;
//	}
//
//	else if (ch1 == '*')
//	{
//		result = num1 * num2;
//	}
//
//	else
//	{
//		result = num1 / num2;
//	}
//
//	printf("result = %.1f", result);
//	_getch();
//	return 0;
//}

//2-4 49
//int main()
//{
//	int num1;
//	printf("월을 이용하여 계절이나 구하죠, 뭐.\n");
//	printf("몇월 ? :");
//	scanf("%d", &num1); //num1입력
//
//	if (num1 >= 3 && num1 <= 5) //num1이 3보다 크거나 같고 5보다 작거나 같으면 출력
//	{
//		printf("봄이 왔어요~");
//	}
//
//	else if (num1 >= 6 && num1 <= 8) //num1이 6보다 크거나 같고 8보다 작거나 같으면 출력
//	{
//		printf("여름이 왔어요~");
//	}
//
//	else if (num1 >= 9 && num1 <= 11) //num1이 9보다 크거나 같고, 11보다 작거나 같으면 출력
//	{
//		printf("가을이 왔어요~");
//	}
//
//	else if (num1 <= 12 && num1 >= 1) //num1이 12보다 작거나 같고, 1보다 크거나 같을때 출력. 위에 모든 조건이 패스되었기 때문에 전체 탐색.
//	{
//		printf("겨울이 왔어요~");
//	}
//
//	else //위 조건을 다 만족하지 않는 값이 들어 오면 //13이상
//	{
//		//올림푸스 출력
//		printf("TTTTTTTTTT       IIIIIIIIIII\n");
//		printf("    TT                II\n");
//		printf("    TT                II\n");
//		printf("    TT                II\n");
//		printf("TTTTTTTTT        IIIIIIIIIII\n");
//		printf("\a\a\a\a\a\a\a\a\a\a\a\a제대로 좀 치지?");
//	}
//	_getch();
//
//	return 0;
//
//}

//2-5 49p
//int main()
//{
//	int age;
//	char ch;
//	printf("성별을 입력하세요 (남자는 M,여자는 F)\n");
//	scanf("%c", &ch);
//	printf("나이를 입력하세요:");
//	scanf("%d", &age);
//	if (ch == 'm')
//	{
//		if (age < 18)
//		{
//			printf("성별 :남자  미성년자");
//		}
//		else
//		{
//			printf("성별 :남자 성인");
//		}
//	}
//
//	else if (ch == 'f')
//	{
//		if (age < 18)
//		{
//			printf("성별 :여자  미성년자");
//		}
//		else
//		{
//			printf("성별 :여자 성인");
//		}
//	}
//	else
//	{
//		printf("고자 입니다.");
//	}
//	_getch();
//	return 0;
//}

//연습문제 2
//int main()
//{
//	int num1, num2;
//	printf("두개의 정수를 입력해주세요 \n");
//	printf("정수1 :");
//	scanf("%d", &num1);
//	printf("정수2 :");
//	scanf("%d", &num2);
//
//	if (num1 > num2)
//	{
//		printf("A는 B보다 큽니다.");
//	}
//
//	else if (num1 < num2)
//	{
//		printf("B는 A보다 큽니다.");
//	}
//
//	else
//	{
//		printf("A와 B는 같습니다..");
//	}
//	_getch();
//	return 0;
//}

//예제4 p51
#include <time.h>
#include <stdlib.h>

int main()
{
	int num;


	printf("0~2사이에 난수 발생 시작 \n");
	srand((int)time(NULL));
	num = rand() % 3;

	switch (num)
	{
	case 0:
		puts("0");
		break;
	case 1:
		puts("1");
		break;
	case 2:
		puts("2");
		break;
	default:
		puts("요류");
		break;
	}
	_getch();
	return 0;
}