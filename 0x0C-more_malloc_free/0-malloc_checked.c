#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of array
 *
 * Return: void
 */

void malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);


	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
