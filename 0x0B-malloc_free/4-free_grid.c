#include "main.h"
#include <stdlib.h>

/**
 * free_grid - entry
 * @grid: input
 * @height: input
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
