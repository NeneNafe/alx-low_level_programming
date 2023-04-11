#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: Input variable
 * @height: Height of the grid
 * Return: Sccess
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
