#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculates the minimum number of coins needed to make change for a given amount of money in cents.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char **argv)
{
	int c = 0;
	int money[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(money) / sizeof(money[0]);
	int number = 0;
	int a = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
       
	c = atoi(argv[1]);

	if (c < 0)
	{
		printf("0\n");
		return (0);
	}

	while (a < numCoins)
	{
		while (c >= money[a])
		{
			c -= money[a];
			number++;
		}
		a++;
	}

	printf("%d\n", number);

	return (0);
}
