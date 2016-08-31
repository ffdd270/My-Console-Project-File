#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	struct _node * next;
	int data;
}Node;

int main()
{
	Node * head = (Node *)malloc(sizeof(Node));
	head->next = NULL; 
}