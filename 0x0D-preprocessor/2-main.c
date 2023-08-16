#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print source file name
 *
 * Return: Always 0 success
 */

int main(void)
{
	for (int i = 0; __FILE__[i] != '\0'; i++)
	{
		putchar(__FILE__[i]);
	}

	putchar('\n');

	return (0);
}
