#include "main.h"

/**
 * main- entry point
 *
 * _islower- function checks if alphabet is in lowercase
 *
 * Return 1 if c is lowercae
 * Return 0 if c is not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
