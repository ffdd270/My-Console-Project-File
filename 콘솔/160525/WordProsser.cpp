#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct _node
{
	struct _node * next;
	struct _node * prv;
	char * str;
}Node;

int main()
{
	Node * head = (Node *)malloc(sizeof(Node));
	head->next = NULL;
	Node * newNode;
	Node * cur;
	Node * delNode;
	Node * delNextNode;

	char * input;

	printf("워드 프로세서 !! \n0입력시 종료!! \n");

	while (1)
	{
		scanf("%s", input);

		if (!strcmp(input, "0"))
		{
			break;
		}

		newNode = (Node *)malloc(sizeof(Node));
		newNode->next = head->next;

	}
}