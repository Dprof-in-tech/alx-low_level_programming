#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Function to check malloc for a string and return pointer
 * @b: input integer
 *
 * Return: Always 0 success
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(char) * b);

	if (str == NULL)
		exit(98);

	return (str);
}
