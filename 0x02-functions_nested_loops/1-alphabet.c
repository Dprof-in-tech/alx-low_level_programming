#include "main.h"
/**
 * Print_alphabet - print all alphabet in lowercase
 */

void _putchar(char c) {
	write(1, &c, 1);
}

void print_alphabet(void)
{
	char letter = 'a';
	while (letter <='z'){
		_putchar(letter);
		letter++;
	}
	_putchar("\n");
}
