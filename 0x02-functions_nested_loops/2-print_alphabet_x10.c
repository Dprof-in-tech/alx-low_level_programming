#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description - function print alphabets in lowercase 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char alpha_bets = 'a';
	for(int i = 0; i < 10; i++)
	{
		while (alpha_bets <= 'z')
		{
			_putchar(alpha_bets);
			alpha_bets++;
		}
	}
	_putchar('\n');
}
