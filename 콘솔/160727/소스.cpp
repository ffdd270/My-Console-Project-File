#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
//	char *p;
//	int i;
//
//	p = "mu bub ja";
//	for (i = 0; i < 9; i++)
//	{
//		printf("*(p+%d) == %c\n", i, *(p + i));
//	}
//	_getch();
//}

//int main()
//{
//	char line1[20], line2[20], line3[20];
//	char *a[3];
//	a[0] = "";
//	a[1] = "";
//	a[2] = "";
//	a[0] = gets(line1);
//	a[1] = gets(line2);
//	a[2] = gets(line3);
//	printf("%s, %s, %s \n", a[0], a[1], a[2]);
//	_getch();
//}


//int main()
//{
//	char *p[4];
//	int i;
//
//	p[0] = "red";
//	p[1] = "Yellow";
//	p[2] = "Green";
//	p[3] = "Blue";
//
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", p[i] + 1);
//	}
//	_getch();
//} 



//int main()
//{
//	char *str;
//	str = (char*)malloc(20);
//
//	strcpy(str, "hEllo, World!");
//
//	*str = 'H';
//	str[1] = 'e';
//	printf("%s\n", str);
//	free(str);
//	_getch();
//}

//int main()
//{
//	int i;
//	int * ptr;
//	int total;
//	int num;
//	int sum = 0;
//
//	printf("몇개 수 입력? ");
//	scanf("%d", &num);
//	ptr = (int *)malloc(sizeof(int)* num);
//	printf("실제수를 입력하세요 \n");
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &ptr[i]);
//		sum += ptr[i];
//	}
//	printf("%d ", sum);
//	_getch();
//
//}

//#include <ctype.h>
//
//
//void str_toupper(char * str);
//void str_tolower(char * str);
//
//int main()
//{
//	char str[100];
//	printf("문자열을 입력하시던가 \n");
//	scanf("%s",str);
//	str_toupper(str);
//	printf("%s\n",str);
//	str_tolower(str);
//	printf("%s\n", str);
//	_getch();
//}
//
//void str_toupper(char * str)
//{
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		str[i] = toupper(str[i]);
//		i++;
//	}
//}
//
//void str_tolower(char * str)
//{
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		str[i] = tolower(str[i]);
//		i++;
//	}
//}

typedef unsigned char BYTE;
typedef unsigned int UINT;
typedef int ARRAY[10];

int main()
{
	BYTE ch = 'a', str[10] = "abcd";
	UINT a = 100, b = 200;
	ARRAY k = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("ch = %c str = %s \n", ch, str);
	printf("a = %d, b = %d", a, b);

	for (a = 0; a < 10; a++)
	{
		printf("%5d ",k[a]);
	}
	printf("\n");
	_getch();
}
