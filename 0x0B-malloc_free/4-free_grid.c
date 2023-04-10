#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2D grid
 * @grid: matrix to be freed
 * @height: column of new matrix
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return (NULL);
	if (height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
		free(grid[i]);
	return (grid);
}
