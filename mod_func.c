#include "monty.h"

/**
 * Mod_Top_Stack - Mod of the numbers
 * @stack: Store the head of the structure
 * @line_number: Lines inside the file
 * Return: Top number with the result
 */

stack_t Div_Top_Stack(stack_t **stack, unsigned int line_number)
{
        int num_Div;

        num_Div = *stack->n;

        if (line_number < 2)
        {
                fprintf(stderr, "L<line_number>: can't mod, stack too short");
                exit(EXIT_FAILURE);
        }

        if (num_Div == 0 || num_Div < 0)
        {
                fprintf(stderr, "L<line_number>: division by zero");
		exit(EXIT_FAILURE);
        }
        else
        {
                *stack->next->n %= num_Div;
        }

        Pop_Element_Stack(stack, line_number);

        return (*stack);
}
