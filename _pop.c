#include "monty.h"

void pop(stack_t **stack, unsigned int line_number)
{
    if (*stack) {
        stack_t *temp = *stack;
        *stack = (*stack)->next;
        free(temp);
    } else {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
}
