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
	unsigned int nxtnum;

	va_start(number, n);
	if (separator != NULL)
	{
		printf("%d", va_arg(number, int));
		for (nxtnum = 1; nxtnum < n; nxtnum++)
		{
			printf("%s%d", separator, va_arg(number, int));
		}
	}
	else
	{
		printf("%d", va_arg(number, int));
	}

	va_end(number);
	printf("\n");
}
