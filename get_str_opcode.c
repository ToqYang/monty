#define EXTERNS
#include "monty.h"

/**
 * get_opcode_func - Return the element of the stack
 * @str: String to compare with the different functions
 * stack: Head of the struct to find the function
 * line_number: Unsigned integer line number
 * Return: Result of the function
 **/

void (*get_opcode_func(char *str))(stack_t **stack, unsigned int line_number)
{
	int elements;

	instruction_t instruction[] = {
		{"push", Push_In_Stack},
		{"pall", Pall_Stack},
		{"pint", Pint_Top_Stack},
		{"pop", Pop_Element_Stack},
		{"swap", Swap_Top_Stack},
		{"add", Add_Top_Stack},
		{"nop", Nop_Stack},
		{"sub", Sub_Top_Stack},
		{"div", Div_Top_Stack},
		{"mul", Mul_Top_Stack},
		{"mod", Mod_Top_Stack},
		{"pchar", pchar_func},
		{NULL, NULL}
	};

	for (elements = 0; elements < 13; elements++)
	{
		if (instruction[elements].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", global.l_num, global.opco);
			exit(EXIT_FAILURE);
		}
		if (strcmp(instruction[elements].opcode, str) == 0)
		{
			return (instruction[elements].f);
		}
	}
	return (0);
}
