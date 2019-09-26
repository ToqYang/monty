#include "monty.h"

/**
 * Mul_Top_Stack - Multiply the numbers
 * @stack: Store the head of the structure
 * @line_number: Lines inside the file
 * Return: Top number with the result
 */

stack_t Mul_Top_Stack(stack_t **stack, unsigned int line_number)
{
        int num_Mul;

        num_Mul = *stack->n;

        if (line_number < 2)
        {
                fprintf(stderr, "L<line_number>: can't mul, stack too short");
                exit(EXIT_FAILURE);
        }


	*stack->next->n *= num_Mul;

        Pop_Element_Stack(stack, line_number);

        return (*stack);
}
