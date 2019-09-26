#include "monty.h"

/**
 * Pall_Stack - Print all the stack
 * @stack: Header of the node
 * @line_number: Lines of the file
 */

void Pall_Stack(stack_t **stack, unsigned int line_number)
{
	size_t count;
	stack_t *aux_Stack;

	count = 0;
	aux_Stack = *stack;

	if (line_number <= 0)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}

	while (aux_Stack != NULL)
	{
		printf("%d\n", aux_Stack->n);
		aux_Stack = aux_Stack->next;
		++count;
	}
}
