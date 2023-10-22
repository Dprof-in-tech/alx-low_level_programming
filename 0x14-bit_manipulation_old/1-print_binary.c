#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints binary form of a number
 * @n: input number
 *
 * Return: Binary form of n
 */

void print_binary(unsigned long int n)
{
	unsigned long int b = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (b > 0)
	{
		if (n & b)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}

		b >>= 1;
	}
}
