#include "monty.h"

/**
 * Add_Top_Stack - Sum the first and the second from top
 * @stack: Store the head of the structure
 * @line_number: Lines inside the file
 * Return: Top number with the result
 */

stack_t Add_Top_Stack(stack_t **stack, unsigned int line_number)
{
	int num_Add;

	num_Add = *stack->n;

	if (line_number < 2)
	{
		fprintf(stderr, "L<line_number>: can't add, stack too short");
		exit(EXIT_FAILURE);
	}

	*stack->next->n += num_Add;

	Pop_Element_Stack(stack, line_number);

	return (*stack);
}
