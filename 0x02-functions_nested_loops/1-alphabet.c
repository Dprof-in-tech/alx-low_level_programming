#include "main.h"
/**
 * Print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter = 'a';
	while (letter <='z'){
		_putchar(letter);
		letter++;
	}
	_putchar("\n");
}
