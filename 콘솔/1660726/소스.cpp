#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int arr[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int arr1[5] = { 11, 12, 13, 14, 15 };
//	int arr2[5] = { 21, 22, 23, 24, 25 };
//	int *pt[4];
//
//	pt[0] = arr1;
//	pt[1] = arr2;
//	pt[2] = arr[0];
//	pt[3] = arr[2];
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("pt[%d][%d] = %2d\n", i, j, pt[i][j]);
//		}
//	}
//	_getch();
//} 

//int main()
//{
//	int arr[5] = { 11, 12, 13, 14, 15 };
//	int arr1[2] = { 21, 22 };
//	int arr2[3] = { 31, 32, 33 };
//	int *pt[3];
//	int **pp;
//	pp = pt;
//
//	printf("arr = %u arr2 = %u arr3 = %u \n", arr, arr1, arr2);
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("pt + %d = %u\t", i, pt + i);
//		printf("pp + %d = %u\n", i, pp + i);
//	}
//
//	pt[0] = arr;
//	pt[1] = arr1;
//	pt[2] = arr2;
//
//	printf("포인터 배열에 대입한 후의 내용 \n");
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("pp[%d][%d] = %2d\n", i, j, pp[i][j]);
//		}
//	}
//
//	printf("포인터의 포인터 증가하며 출력\n");
//	printf("pp = %u, *pp = %u **pp=%d\n", pp, *pp, **pp);
//	printf("pp[0][1] = %2d \n", pp[0][1]);
//	printf("(*pp)[1] = %2d \n", (*pp)[1]);
//	printf("*pp[1] = %2d \n", *pp[1]);
//
//	pp++;
//	printf("pp[0][1] = %2d \n", pp[0][1]);
//	printf("(*pp)[1] = %2d \n", (*pp)[1]);
//	printf("*pp[1] = %2d \n", *pp[1]);
//	_getch();
//}

//struct Hello
//{
//private:
//	int data = 10;
//public:
//
//};

//int main()
//{
//	int data[][2] = { { 10, 20 }, { 30, 40 }, { 50, 60 }, { 70, 80 }, { 90, 100 } };
//	int(*ptr)[2];
//	int *aptr[5];
//
//	ptr = data;
//	aptr[0] = &data[0][0];
//	aptr[1] = &data[1][0];
//	aptr[2] = &data[2][0];
//	aptr[3] = &data[3][0];
//	aptr[4] = &data[4][0];
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("ptr : %#x, **ptr : %d, *(ptr + 1) : %d \n ", ptr, **ptr, *(ptr + 1));
//		ptr++;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("aptr[%d] : %#x, *aptr[%d] : %d, *(aptr[%d] + 1) : %d\n",i, aptr[i], i,*aptr[i], i,*(aptr[i] + 1));
//	}
//
//	_getch();
//}

//
//#define NUM_STUDENT 5
//#define NUM_CLASS 3
//
//int main()
//{
//	int i, j;
//	int data[5][3] = { { 100, 90, 80 }, { 90, 90, 80 }, { 70, 90, 80 }, { 100, 30, 70 }, { 100, 90, 100 } };
//	int(*ptr)[3];
//	int *tptr[5];
//	int Student[5][2] = { 0 }; //학생의 총점,평균
//	int Class[3] = { 0 }; //평균
//
//	ptr = data;
//	tptr[0] = &data[0][0];
//	tptr[1] = &data[1][0];
//	tptr[2] = &data[2][0];
//	tptr[3] = &data[3][0];
//	tptr[4] = &data[4][0];
//
//	//학생별 평균, 총점
//	for (i = 0; i < NUM_STUDENT; i++)
//	{
//		for (j = 0; j < NUM_CLASS; j++)
//		{
//			Student[i][0] += tptr[i][j];
//		}
//		Student[i][1] = Student[i][0] / NUM_CLASS;
//	}
//
//	//과목별 평균
//	for (i = 0; i < NUM_CLASS; i++)
//	{
//		for (j = 0; j < NUM_STUDENT; j++)
//		{
//			Class[i] += ptr[j][i];
//		}
//	}
//
//	for (i = 0; i < NUM_STUDENT; i++)
//	{
//		printf("[%d]학생의 총점 : %d, 평균 %d \n", i, Student[i][0], Student[i][1]);
//	}
//
//	for (i = 0; i < NUM_CLASS; i++)
//	{
//		switch (i)
//		{
//		case 0:
//			printf("국어");
//			break;
//		case 1:
//			printf("영어");
//			break;
//		case 2:
//			printf("수학");
//			break;
//		default:
//			break;
//		}
//		printf("의총점 : %d, 평균 %d \n", Class[i], Class[i]/NUM_STUDENT);
//	}
//	_getch();
//}

//int main()
//{
//	char str1[5] = "abcd";
//	char * str2 = "ABCD";
//
//	printf("%s \n", str1);
//	printf("%s \n", str2);
//
//	str1[0] = 'x';
//	//str2[0] = 'x';
//
//	printf("%s \n", str1);
//	printf("%s \n", str2);
//	_getch();
//}

//int main()
//{
//	char * city;
//	int i;
//	city = "SEOUL";
//	for (i = 0; i < 5; i++)
//	{
//		printf("*(city+%d) == %c city[%d] = %c \n", i, *(city + i), i, city[i]);
//	}
//	_getch();
//}

//int main()
//{
//	char * str = "STR";
//	while (*str != '\0')
//	{
//		printf("%c \n", *str);
//		str++;
//	}
//	_getch();
//}


//int main()
//{
//	char * str;
//	str = "c-stystem";
//
//	printf("str의 첫 주소 == %d \n", str);
//	printf("문자열 == %s\n", str);
//	_getch();
//
//}
//int main()
//{
//	char * p;
//	p = "School-Bus";
//
//	while (*p != 'h')
//	{
//		p++;
//	}
//
//	printf("%s\n", p);
//}


//int main()
//{
//	char *n;
//	n = "Spring, Summer, Autumn, Winter";
//	printf("%s\n", n + 7);
//	_getch();
//}

//int main()
//{
//	char a[8];
//	char *p;
//	int n;
//	p = &a[0];
//	printf("문자열 ? ");
//	scanf("%8c", p);
//	for (n = 0; n < 8; n++)
//	{
//		printf("문자열출력 = %c \n", *(p + n));
//	}
//	_getch();
//}

//int main()
//{
//	char line[20] = { NULL };
//	char *r;
//	int n;
//	r = gets(line);
//	for (n = 0; n < 12; n++)
//		printf("%c", *(r + n));
//	_getch();
//}

#include <string.h>
int main()
{
	char * arr = "HaruGakkaP";
	printf("너의 ID는 %s고 문자열 크기는 %d이다.\n", arr, strlen(arr));

	for (int i = 0; i < strlen(arr); i++)
	{
		printf("%d부터 끝까지 : %s\n", i, arr + i);
	}

	_getch();
}