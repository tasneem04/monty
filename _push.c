#include "monty.h"

void push(stack_t **stack, int data)
{
	stack_t *newNode = malloc(sizeof(stack_t));
	if(newNode == NULL){
		fprintf(stderr, "Memory allocation failed\n");
	        exit(EXIT_FAILURE);
	}
	newNode->n = data;
	newNode->prev = NULL;
	newNode->next = *stack;
	if (*stack != NULL)
	{
        (*stack)->prev = newNode;
	}
	*stack = newNode;
}
