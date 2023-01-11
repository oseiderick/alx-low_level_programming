#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - alloc grid
 * @grid: pointer to 2D array
 * @height: array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
