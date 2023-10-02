#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Fucntion to get endianness
 *
 * Return: Always 0 success
 */

int get_endianness(void)
{
	int init_value = 0x01;
	unsigned char *b;

	b  = (unsigned char *) &init_value;

	if (b[0] == 0x01)
		return (1);
	else
		return (0);
}
