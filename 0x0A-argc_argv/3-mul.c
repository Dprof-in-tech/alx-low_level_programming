#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main-the function that prints out the results of the numbers
 * @argc: contains the array count
 * @argv: array containing input characters\
 * @num1: input number 1
 * @num2: input number 2
 * @result: result of mathematicla operations between num 1 and num 2
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;

		printf("%d\n", result);
	}

	return (0);
}
