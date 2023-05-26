#include "main.h"

/**
 * free_grid - Program that frees 2D grid for alloc-grid created
 * @grid: grid integer pointer
 * @height: grid integer
 *
 * Return: NULL if size is 0
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
