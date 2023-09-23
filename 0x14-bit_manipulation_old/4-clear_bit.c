#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Function to set bit value to zero at given index
 * @index: input index value
 * @n: input number
 *
 * Return: ALways 0 success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	b = ~b;
	*n = *n & b;

	return (1);
}
