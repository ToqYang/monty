#include "monty.h"

/**
 * Div_Top_Stack - Divide the second to the first
 * @stack: Store the head of the structure
 * @line_number: Lines inside the file
 * Return: Top number with the result
 */

stackt_t Div_Top_Stack(stack_t **stack, unsigned int line_number)
{
	int num_Div;

	num_Div = *stack->n;

	if (line_Number < 2)
        {
                fprintf(stderr, "L<line_number>: can't div, stack too short");
                exit(EXIT_FAILURE);
        }

	if (num_Div == 0)
	{
		fprintf(stderr, "L<line_number>: division by zero");
                exit(EXIT_FAILURE);
	}
	else
	{
		*stack->next->n /= num_Div;
	}

	Pop_Element_Stack(stack, line_number);

        return (*stack);
}
