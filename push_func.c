#include "monty.h"

/**
 * Push_In_Stack - Add a element at the stack
 * @stack: Header of the stack
 * @line_number: The line of the file
 * Return: Success
 */

stack_t Push_In_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *new_Element;

	if (line_number <= 0)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}

	new_Element = malloc(sizeof(stack_t));

	if (new_Element == NULL)
		return (NULL);

	new_Element = *stack;
	new_Element->n = number;
	new_Element->prev = NULL;
	*stack = new_Element;

	if (new_Element->next != NULL)
	{
		new_Element->next->prev = new_Element;
	}

	return (new_Element)
}
