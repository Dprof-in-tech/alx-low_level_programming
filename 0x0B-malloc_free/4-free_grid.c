#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Function to free grid memory
 * @grid: memory to be freed
 * @height: grid height
 *
 * Return: Always 0 SUccess
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
