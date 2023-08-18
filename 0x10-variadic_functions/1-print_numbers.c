#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function to print numbers
 * @separator: The character to seperate the printed numbers
 * @n: 1st input number
 *
 * Return: Always 0 success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int j;

	va_start(number, n);
	if (separator == NULL)
	{
		separator = " ";
	}
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(number, int));
		if (j < n - 1)
			printf("%s", separator);
	}
	va_end(number);
	printf("\n");
}
