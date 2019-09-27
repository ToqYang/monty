#include "monty.h"

/**
 *_isdigit - check digit between 0-9
 * @str: string
 * Return: 0 success 1 for number betwwen 0-9
 */
int _isdigit(char *str)
{
	int i = 0, j = 1;

	if (str[0] == '-' && str[1] != '\0')
	{
		while (str[j])
		{
			if ((str[j] < 48) || (str[j] > 57))
				return (1);
			j++;
		}
	}
	else if (str[0] != '-' && str[1] != '\0')
	{
		while (str[i])
		{
			if ((str[i] < 48) || (str[i] > 57))
				return (1);
			i++;
		}
	}
	return (0);
}
