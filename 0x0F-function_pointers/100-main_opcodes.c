#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print opcodes
 * @argc: input
 * @argv: input
 *
 * Return: ALways 0 success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *opcodes = (unsigned char *)main;

	int j;

	for (j = 0; j < i; j++)
	{
		printf("%02x\n", opcodes[j]);
		if (j < i - 1)
		{
			printf(" ");
		}
	}
	return (0);
}
