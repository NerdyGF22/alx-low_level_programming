#include "main.h"

/**
 * free-grid - free a 2D grid previous created
 * by alloc_grid
 * @grid: pointer to 2D grid
 * @height: number of rows
 * Return: nothing, free memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
