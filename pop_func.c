#include "monty.h"

/**
 * Pop_Element_Stack - Remove the element of the stack
 * @stack: Header of the nodes
 * @line_number: Lines of the file
 * Return: Address of the new pointer to struct
 */

void Pop_Element_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *del_Node;

	del_Node = *stack;

	if (line_number <= 0)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}

	del_Node = *stack->next;
	free(*stack);
	*stack = del_Node;

	if (del_Node->next != NULL)
	{
		(*stack)->prev = NULL;
	}

	return (*stack);
}
