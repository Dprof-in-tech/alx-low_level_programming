#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: input string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int tp = 0;

	if (*s)
	{
		tp++;
		tp =+ _strlen_recursion(s + 1);
	}
	return (tp);
}
