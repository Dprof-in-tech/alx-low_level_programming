#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Function to get number of integers to skip bits
 * @n: input
 * @m: input
 *
 * Return: number of integers to skip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = n ^ m, count = 0;

	while (b != 0)
	{
		count = count + (b & 1);
		b = b >> 1;
	}
	return (count);
}
