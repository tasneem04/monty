#include "monty.h"
/**
 * _push - function that pushes an element to the stack.
 * @newNode: double pointer to the want to add to head of stack.
 * @head: douple pointer that point the first node of the stack.
 * Return: No return.
 * */
stack_t *head = NULL;
void push(int data)
{
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
