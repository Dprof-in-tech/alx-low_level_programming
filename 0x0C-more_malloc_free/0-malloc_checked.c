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
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
