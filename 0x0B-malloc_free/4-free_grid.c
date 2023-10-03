#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D grid already created in alloc_grid
 * @grid: 2D grid to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

for (i = 0; i < height; i++)
	free(grid[i]);
free(grid);
}
