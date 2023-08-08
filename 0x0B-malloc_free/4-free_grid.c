#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - check for this function
 * @grid: check for this parameter
 * @height: check for this parameter
 * Return: void
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
