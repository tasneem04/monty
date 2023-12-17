#include "monty.h"

/**
 * pall - function that print all values on the stack from the top.
 * Return: No return.
 * */

void pall()
{	
	stack_t *pointer = NULL;
	pointer = head;
	while (pointer != NULL)
	{	printf("%i\n",pointer->n);
		pointer = pointer->next;
	}
}
