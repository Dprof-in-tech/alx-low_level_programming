#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function to convert binary to unsigned int
 * @b: input binary character
 *
 * Return: Converted value
 */

unsigned int binary_to_uint(const char *b)
{
	const char *c;
	unsigned int result = 0, power = 1;
	size_t length = 0;
	int i;

	if (b == NULL)
		return (0);

	for (c = b; *c != '\0'; c++)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			result += power;

		power *= 2;
	}

	return (result);
}
