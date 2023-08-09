#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to create grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: new created grid
 */

int **alloc_grid(int width, int height)
{
	int **new_array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_array = malloc(sizeof(int *) * height);

	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		new_array[i] = malloc(sizeof(int) * width);

		if (new_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(new_array[j]);
			}
			free(new_array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			new_array[i][j] = 0;
		}
	}
	return (new_array);
}
