#include "monty.h"

/**
 * Pop_Element_Stack - Remove top
 * @stack: Header
 * @line_number: Lines of the file
 * Return: Address of the new pointer to struct
 */

void Pop_Element_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *Pop;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	Pop = *stack;
	*stack = (*stack)->next;
	free(Pop);
}
