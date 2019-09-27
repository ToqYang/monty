#include "monty.h"

/**
 * Swap_Top_Stack - Swap the numbers from the top
 * @stack: Header of the struct
 * @line_number: Lines of the file
 * Return: Struct of the node
 */

void Swap_Top_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *swap_Top;
	int num1, num2;

	num1 = 0;
	num2 = 0;

	if (line_number < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	swap_Top = *stack;

	num1 = swap_Top->n;
	num2 = swap_Top->next->n;

	swap_Top->n = num2;
	swap_Top->next->n = num1;
}
