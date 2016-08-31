#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int today, sel;
//	int year, mount, day;
//	printf("날짜 : ");
//	scanf("%d", &today);
//	printf("번호 : ");
//	scanf("%d", &sel);
//
//	switch (sel)
//	{
//	case 1:
//		year = today / 10000;
//		today -= (year * 10000);
//		mount = today / 100;
//		today -= (mount * 100);
//		day = today;
//
//		printf("변환 : %d년 %d월 %d일", year, mount, day);
//		break;
//	case 2:
//		year = today / 10000;
//		today -= (year * 10000);
//		mount = today / 100;
//		today -= (mount * 100);
//		day = today;
//
//		printf("변환 : %d-%d-%d", year, mount, day);
//		break;
//	case 3:
//		year = today / 10000;
//		today -= (year * 10000);
//		mount = today / 100;
//		today -= (mount * 100);
//		day = today;
//
//		printf("변환 : %d/%d/%d", year, mount, day);
//		break;
//	default:
//		printf("ERROR");
//		break;
//	}
//	_getch();
//}

//int main()
//{
//	int collet = 0;
//	char input;
//	int bit;
//	for (int i = 1; i < 256; i = i * 2)
//	{
//		if ((input & i) > 0)
//		{
//			collet++;
//		}
//	}
//	printf("문자 :");
//	scanf("%c", &input);
//	printf("개수 : %d \n", collet);
//	printf("값 : %d",input);
//
//	_getch();
//	return 0;
//}

//int main()
//{
//	int input;
//	int jarisu = 0;
//
//	printf("정수 :");
//	scanf("%d", &input);
//
//	if (input >= 1000)
//	{
//		jarisu += 4;
//	}
//
//	else if (input >= 100)
//	{
//		jarisu += 3;
//	}
//
//	else if (input >= 10)
//	{
//		jarisu += 2;
//	}
//
//	else
//	{
//		jarisu += 1;
//	}
//
//	printf("자리수 : %d", jarisu);
//	_getch();
//	return 0;
//}


int main()
{
	int fisrt,second,mid,last = 0;
	int internet;
	printf("정수 : ");
	scanf("%d", &internet);
	fisrt = (internet / 1000);
	second = ((fisrt * 1000) - internet) / 100;
	mid = ((second * 100) - internet) / 10;


	printf("꺼꾸로 : %d", internet);
	_getch();

}