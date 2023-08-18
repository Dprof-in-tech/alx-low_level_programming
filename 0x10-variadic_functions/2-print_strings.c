#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function to print strings
 * @separator: Sign that comes between strings
 * @n: Number of input strings
 *
 * Return: ALways 0 Success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *args;
	unsigned int s;

	va_start(strings, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (s = 0; s < n; s++)
	{
		args = va_arg(strings, char *);
		if (args == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", args);

		if (s < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
