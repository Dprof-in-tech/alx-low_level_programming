#include "main.h"

int exact_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function to print square root of a number
 *
 * @n: input integer to fin its square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (exact_sqrt_recursion(n, 0));
}

/**
 * exact_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int exact_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (exact_sqrt_recursion(n, i + 1));
}
