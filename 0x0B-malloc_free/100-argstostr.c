#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Function to concatenate all arguments
 * @ac: input integer
 * @av: input string
 *
 * Return: Pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int i, k;
	size_t j;
	size_t total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]);

	result = malloc(total_length + ac - 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			result[k] = av[i][j];
			k++;
		}

		if (i < ac - 1)
		{
			result[k] = '\n';
			k++;
		}
	}

	result[k] = '\0';
	return (result);
}
