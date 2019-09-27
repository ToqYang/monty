#define EXTERNS
#include "monty.h"

/**
 * Push_In_Stack - Add a element at the stack
 * @stack: Header of the stack
 * @line_number: The line of the file
 * Return: Success
 */

void Push_In_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *new_Element;
	char *numb = NULL;

	numb = strtok(NULL, " \n\t");
	if (_isdigit(numb) == 0)
		global.number = atoi(numb);

	if (line_number <= 0)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	new_Element = malloc(sizeof(stack_t));

	if (new_Element == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	new_Element->n = global.number;
	new_Element->prev = NULL;
	new_Element->next = NULL;

	if (*stack)
	{
		new_Element->next = *stack;
		*stack = new_Element;

		if (new_Element->next != NULL)
			(new_Element->next)->prev = new_Element;
	}
	else
		*stack = new_Element;
}
