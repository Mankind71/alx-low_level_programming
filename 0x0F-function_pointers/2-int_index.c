#include <stddef.h>

/**
 * int_index - searches for int
 *
 * @array: starting address
 * @size: size of array
 * @cmp: pointer to fnx to compare
 *
 * Return: -1 if no match of size <= 0,
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
