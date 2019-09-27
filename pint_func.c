#include "monty.h"

/**
 * Pint_Top_Stack - Print the top of the stack
 * @stack: Header of the nodes
 * @line_number: Lines of the file
 **/

void Pint_Top_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *pint_Node;

	if (line_number <= 0)
	{
		fprintf(stderr, "L%d: usage: push integer", global.l_num);
		exit(EXIT_FAILURE);
	}

	pint_Node = *stack;

	printf("%d\n", pint_Node->n);
}
