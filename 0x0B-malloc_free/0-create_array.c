#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: number of array
 * @c: character to init array with
 *
 * Return: pointer to init. array; NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(c) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
