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
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(all, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(all, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
				}
				if (str != NULL)
					printf("%s%s", separator, str);
				break;
		}

		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(all);
}
