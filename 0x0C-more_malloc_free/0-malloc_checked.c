#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function to check malloc for a string and return pointer
 * @b: input integer
 *
 * Return: Always 0 success
 */

void *malloc_checked(unsigned int b)
{
	char *string;

	string = malloc(sizeof(char) * b);

	if (string == NULL)
		exit(98);

	return (string);
}
