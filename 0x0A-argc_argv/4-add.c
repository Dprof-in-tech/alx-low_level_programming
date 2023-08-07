#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- Function that prints the addition of arguments
 * is_positive_integer - Function that checks the ASCII values of the argument
 * @argc: Contains the number of arguments
 * @argv: Array containing the arguments
 * @result: Stores the results of the operation
 * @a: used to check the while function condition
 * @str: Variable that stores the argument character to be checked
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int result = 0;
	int a = 1;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (a < argc)
	{
		if (!is_positive_integer(argv[a]))
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[a]);
		a++;
	}

	printf("%d\n", result);
	return (0);
}

int is_positive_integer(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}

	return (1);
}
