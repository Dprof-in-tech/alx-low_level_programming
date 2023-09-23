#include "main.h"
#include <stdio.h>

/**
 * set_bit - Function to set bit value at given index
 * @n: input value
 * @index: specified index
 *
 * Return: Always 0 success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= b;
	return (1);
}
