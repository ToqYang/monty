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
	int integer = 0, number_line = 1, i = 0, j = 0;
	FILE *file = NULL;
	char **tokens = NULL;

	char *line = NULL;
	size_t line_buf = 0;
	ssize_t line_size = 0;

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

	while (line_size != -1)
	{
		line_size = getline(&line, &line_buf, file);
		tokens[i] = strtok(line, "  \n");
		while (tokens[j])
		{
			if (j > 1)
			{
				fprintf(stderr, "Error: two instructions in one line\n");
				fclose(file);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		integer = atoi(tokens[1]);
		function_struct();
		i++;
		number_line++;
	}
	fclose(file);
	return (0);
}
