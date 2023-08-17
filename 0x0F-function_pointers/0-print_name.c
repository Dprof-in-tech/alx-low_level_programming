#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - FUnction to print name
 * @name: name to print
 * @f: Pointer function
 *
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
