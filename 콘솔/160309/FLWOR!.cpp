#include <stdio.h>
#include <conio.h>

int main(void)
{
	printf("%5c\n", 'a');
	printf("%4c %2c\n", 'a', 'a');
	printf("%4c %2c\n", 'a', 'a');
	printf("%2c %c %2c %2c %c\n", 'a', 'a', 'a', 'a', 'a');
	printf("%c %3c %2c %3c\n", 'a', 'a', 'a', 'a');
	printf("%2c %c %2c %c %c %c\n", 'a', 'a', 'a', '#', 'a', 'a');
	printf("%4c %2c %c\n", 'a', 'a', '#');
	printf("%4c %2c %2c\n", 'a', 'a', '#');
	printf("%5c %2c\n", 'a', '#');

	_getch();
	return 0;
}