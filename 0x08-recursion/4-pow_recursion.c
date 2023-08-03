#include "main.h"

/**
 * _pow_recursion -  fuction to return value of x raised to power y
 *
 * @x: integer to multiply
 * @y: exponent for x
 *
 * Return: value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
