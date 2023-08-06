#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function to print out the argument count
 * @argc: the argument count to be printed
 * @argv: the array containing the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	if (*argv++)
	{
		printf ("%d\n", --argc);
	}
	return (0);
}
