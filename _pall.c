#include "monty.h"
void pall()
{	
	stack_t *pointer = NULL;
	if(head == NULL)
		printf("Linked List is empty");
	pointer = head;
	while (pointer != NULL)
	{	printf("%i\n",pointer->n);
		pointer = pointer->next;
	}
}
