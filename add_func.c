#include "monty.h"

/**
 * Add_Top_Stack - Sum the first and the second from top
 * @stack: Store the head of the structure
 * @line_number: Lines inside the file
 * Return: Top number with the result
 */

void Add_Top_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *num_Aux;

	num_Aux = *stack;

	if (line_number < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	num_Aux = (*stack)->next;
	num_Aux->n += (*stack)->n;

	Pop_Element_Stack(stack, line_number);
}
