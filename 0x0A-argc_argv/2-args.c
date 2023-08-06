#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main-function toprint out the arguments
 * @argc: contains argument array count
 * @argv: array containing arguments to print
 *
 * exit- success value from standard library
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
