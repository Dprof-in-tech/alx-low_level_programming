#include "main.h"
/**
 * print_sign - check an integer and prints its sign
 * @n: The integer to be checked
 *
 * Return: 1 if n is positive, -1 when negative and  0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
