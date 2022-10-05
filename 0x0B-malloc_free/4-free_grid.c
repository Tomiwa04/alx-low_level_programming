#include "main.h"

/**
 * free_grid - free a 2 dimensional grid previously created by
 * alloc_grid function.
 * @grid: matrix double pointer
 * @height: rows (pointer)
 *
 * Return: Nothing
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
