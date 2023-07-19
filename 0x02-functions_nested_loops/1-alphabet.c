#include "main.h"

/**
 *print_alphabet - entry point
 *
 * Description: function prints the alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	chr alpha_bets = 'a';

	while (alpha_bets<='z')
	{
		_putchar(alpha_bets);
		alpha_bets++;
	}
	_putchar('\n');
}
