#include "monty.h"

void push(int data)
{
	stack_t *head = NULL;
	stack_t *newNode = malloc(sizeof(stack_t));
	if(newNode == NULL){
		fprintf(stderr, "Memory allocation failed\n");
	        exit(EXIT_FAILURE);
	}
	newNode->n = data;
	newNode->prev = NULL;
	newNode->next = head;
	if (head != NULL)
	{
        head->prev = newNode;
	}
	head = newNode;
}
