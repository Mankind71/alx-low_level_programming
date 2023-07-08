#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 *
 * @s1: string1
 * @s2: string2
 *
 * Return: difference between the 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
