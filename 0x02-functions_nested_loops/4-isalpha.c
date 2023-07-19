#include "main.h"
/**
 * main- entry point
 *
 * _isalpha- function checks for alphabetic character
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	char c = 'a';
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
