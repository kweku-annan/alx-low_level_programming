#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for a 2D array (grid) and its contents.
 * @grid: Pointer to the 2D array (grid).
 * @height: Height dimension of the grid.
 *
 * Description: Frees memory of the grid and its contents.
 * Return: Nothing.
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
