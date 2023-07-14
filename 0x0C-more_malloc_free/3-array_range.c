#include <stdlib.h>

/**
 * array_range - creates array of int
 *
 * @min: min val
 * @max: max val
 *
 * Return: pointer to memory. NULL if fails
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, num;

	if (min > max)
		return (NULL);
	num = max - min + 1;
	ptr = malloc(sizeof(min) * num);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < num; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
