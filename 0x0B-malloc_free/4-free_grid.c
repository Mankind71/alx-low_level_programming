#include <stdlib.h>

/**
 * free_grid - frees 2 dim arr of integers
 *
 * @grid: pointer to 2 dim arr
 * @height: size of height (num of rows)
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
