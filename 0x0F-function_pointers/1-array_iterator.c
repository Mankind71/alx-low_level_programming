#include <stddef.h>

/**
 * array_iterator - function array iter
 *
 * @array: address of array containing functions
 * @size: size of arr
 * @action: action to perform
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	if (size < 1)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
