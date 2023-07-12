#include <stdlib.h>

/**
 * alloc_grid - creates a mem for 2 dim arr of integers
 *
 * @width: size of width (num of cols)
 * @height: size of height (num of rows)
 *
 * Return: pointer to memory. NULL if fails
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
