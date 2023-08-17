#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Function to print name
 * @name: Name to print
 * @f: Pointer function
 *
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
