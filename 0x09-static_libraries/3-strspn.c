#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: memory area pointer
 * @accept: starting byte
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int k = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j])
		{
			if (j < i && accept[i] == accept[j])
				break;
			else if (s[j] == accept[i])
			{
				k++;
				break;
			}
			j++;
		}
		i++;
	}

	return (k);
}
