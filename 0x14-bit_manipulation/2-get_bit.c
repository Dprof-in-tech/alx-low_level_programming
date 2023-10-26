#include "main.h"
#include <stdio.h>

/**
 * get_bit - FUnction to get bit at given index
 * @n: input number
 * @index: required index
 *
 * Return: The bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (n & b)
		return (1);
	else
		return (0);
}
