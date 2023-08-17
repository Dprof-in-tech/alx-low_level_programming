#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  Function to print array
 * @array: array of numbers
 * @action: function pointer
 * @size: size of arrays
 *
 * Return: none;
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
