#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum up all arguments.
 * @n: 1st parameter
 *
 * Return: Always 0 success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
