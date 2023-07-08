#include "main.h"

/**
 * _strncat - concatenates 2 strings
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
