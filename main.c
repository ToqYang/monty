#define EXTERNS
#include "monty.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: argument
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int number_line = 1;
	FILE *file = NULL;
	char *tokens = NULL;

	char *line = NULL;
	size_t line_buf = 0;
	ssize_t line_size = 0;

	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		fclose(file);
		exit(EXIT_FAILURE);
	}

	while ((line_size = getline(&line, &line_buf, file)) != -1)
	{
		global.opco = line;
		global.l_num = number_line;
		tokens = strtok(line, " \n\t");
		get_opcode_func(tokens)(&stack, number_line);
		number_line++;
	}
	fclose(file);
	return (0);
}
