#include "main.h"

/**
 * _memcpy -  copies memory area.
 *
 * @src: source memory area pointer
 * @dest: destination memory area pointer
 * @n: number of bytes
 *
 * Return: pointer to destionation memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
