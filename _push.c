#include "monty.h"

void push(int data)
{	stack_t *top = malloc(sizeof(stack_t));
	stack_t *newNode = malloc(sizeof(stack_t));
	if(newNode == NULL){
		fprintf(stderr, "Memory allocation failed\n");
	        exit(EXIT_FAILURE);
	}
	newNode->n = data;
	newNode->prev = NULL;
	newNode->next = top;
	if (top != NULL)
	{
        top->prev = newNode;
	}
	top = newNode;
}
