#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number up to which the times table should be printed
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, product;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j != 0)
					printf(", ");
				if (product < 10)
					printf("  ");
				else if (product < 100)
					printf(" ");
				
				printf("%d", product);
			}
			printf("\n");
		}
	}
}
