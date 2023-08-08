#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  Function to create an array of characters
 * @c: arrays of characters
 *
 * @size: size of memory and storage space to print
 *
 * Return: the address of the printed memory
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_array;

	if (size == 0)
	{
		return (NULL);
	}
	new_array = (char *)malloc(size * sizeof(char));
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}

	return (new_array);
}
