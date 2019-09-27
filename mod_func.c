#include "monty.h"

/**
 * Mod_Top_Stack - Mod of the numbers
 * @stack: Store the head of the structure
 * @line_number: Lines inside the file
 * Return: Top number with the result
 */

void Mod_Top_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *num_Aux;
	int num_Mod;

	num_Aux = *stack;
	num_Mod = num_Aux->n;

	if (line_number < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	if (num_Mod == 0)
	{
		fprintf(stderr, "L%d: division by zero", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		num_Aux = (*stack)->next;
		num_Aux->n %= (*stack)->n;
		Pop_Element_Stack(stack, line_number);
	}
}
