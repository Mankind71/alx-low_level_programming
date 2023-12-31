#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: memory area pointer
 * @c: character to locate
 *
 * Return: pointer to first character || null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
