#include "monty.h"
void pall()
{
	if(head == NULL)
		printf("Linked List is empty");
	stack_t pointer = NULL;
	pointer = head;
	while (pointer != NULL)
	{	printf("%i\n",pointer->n);
		pointer = pointer->next;
	}
}
