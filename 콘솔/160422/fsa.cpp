#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


/*
int main()
{
	int com, user;
	int win = 0;
	int i = 1;
	srand((int)time(NULL));
	while (1)
	{
		com = rand() % 3;
		printf("����, ����, �� ����.\n ");
		printf("���� = 0 ���� = 1 �� = 2 �� �Է��ϼ���. \n");
		scanf("%d", &user);
		switch (user)
		{
		case 0:
			if (com == 1)
			{
				printf("compter = ����, player = lose.. \n");
			}
			if (com == 2)
			{
				printf("computer = ��, player = win! \n");
				win++;
			}
			break;
		case 1:
			if (com == 0)
			{
				printf("compter = ����, player = win!! \n");
				win++;
			}
			if (com == 2)
			{
				printf("computer = ��, player = lose.. \n");
			}
			break;
		case 2:
			if (com == 0)
			{
				printf("compter = ����, player = lose.. \n");
			}
			if (com == 1)
			{
				printf("computer = ����, player = win! \n");
				win++;
			}
			break;
		default:
			goto Noinput;
			break;
		}

		if (win == 1)
		{
			break;
		}
		printf("���! \n");

	Noinput:
		if (com == 0)
		{
			printf("compter = ����, player = lose.. \n");
		}
		if (com == 1)
		{
			printf("computer = ���� , player = lose.. \n");
		}
		if (com == 3)
		{
			printf("computer = ��, player = lose.. \n");
		}
	}
	_getch();
	return 0;
}
*/

//int main()
//{
//	int Rand1, Rand2;
//	int i = 1;
//	srand((int)time(NULL));
//	while (1)
//	{
//		Rand1 = rand() % 6 + 1;
//		Rand2 = rand() % 6 + 1;
//		if (Rand1 == 6 && Rand2 == 6)
//		{
//			break;
//		}
//		printf("Rand1 : %d, Rand2 : %d %d��° ���� \n", Rand1, Rand2,i);
//		i++;
//	}
//	printf("Rand1 : %d, Rand2 : %d %d��° ���� \n", Rand1, Rand2, i);
//	_getch();
//	return 0;
//}

//int main()
//{
//	int number;
//	int copy;
//	int i = 2;
//	printf("number?");
//	scanf("%d",&number);
//	copy = number;
//	while (number > i)
//	{
//		if (number == 0)
//		{
//			break;
//		}
//
//		while (1)
//		{
//			if (number % i == 0)
//			{
//				printf("%d * ", i);
//				number /= i;
//			}
//
//			else
//			{
//				break;
//			}
//		}
//		i++;
//	}
//	printf(" %d = %d", number, copy);
//	_getch();
//}

int main()
{
	int i = 0;
	int input;
	scanf("%d", &input);
	while (i)
	{
		while (i < 4)
		{

		}
	}
}