#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function to print filename
 *
 * @argc: contains the number of items in the array argv
 * @argv: array containing the name of file to print
 *
 * Return: Always 0 (successful)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf ("%s\n", *argv++);
	return (0);
}
