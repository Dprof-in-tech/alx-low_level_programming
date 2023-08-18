#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -  Funuction tha prints all characters passed
 * @format: Character format to be checked and printed
 *
 * Return: ALways 0 success
 */

void print_all(const char * const format, ...)
{
	va_list all;
	char *str;
	char *separator = "";
	unsigned int i;


	va_start(all, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(all, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(all, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(all, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(all, char *);
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
				printf("%s%s", separator, str);
		}

		if (separator != NULL)
		{
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
