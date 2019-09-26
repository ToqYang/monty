#include "monty.h"

/**
 * Pall_Stack - Print all the stack
 * @stack: Header of the node
 * @line_number: Lines of the file
 */

void Pall_Stack(stack_t **stack, unsigned int line_number)
{
	size_t count;

	count = 0;

	if (line_number <= 0)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}

	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
		++count;
	}
}
