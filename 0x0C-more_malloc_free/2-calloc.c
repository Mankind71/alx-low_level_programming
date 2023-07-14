#include <stdlib.h>

/**
 * _calloc - allocates mem for an array
 *
 * @nmemb: number of elements
 * @size: size of arr
 *
 * Return: pointer to memory. NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int memsize = nmemb * size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(memsize);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < memsize; i++)
		ptr[i] = 0;
	return (ptr);
}
