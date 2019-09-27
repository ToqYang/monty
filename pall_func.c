#include "monty.h"

/**
 * Pall_Stack - Print all the stack
 * @stack: Header of the node
 * @line_number: Lines of the file
 */
void Pall_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *aux_Stack;

	aux_Stack = *stack;

	if (line_number <= 0)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	while (aux_Stack)
	{
		printf("%d\n", aux_Stack->n);
		aux_Stack = aux_Stack->next;
	}
}
