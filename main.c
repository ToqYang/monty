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
	int number = 0, number_line = 1, i = 0;
	FILE *file = NULL;
	char **tokens = NULL;

	char *line = NULL;
	size_t line_buf = 0;

	stack_t **stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], O_RDONLY);
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		fclose(file);
		exit(EXIT_FAILURE);
	}

	while ((getline(&line, &line_buf, file)) != -1)
	{
		getline(&line, &line_buf, file);
		tokens[i] = strtok(line, "  \n");
		number = atoi(tokens[1]);
		get_opcode_func(tokens[0])(stack, number_line);
		i++;
		number_line++;
	}
	fclose(file);
	return (0);
}
