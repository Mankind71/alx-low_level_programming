#include <stdlib.h>

/**
 * str_concat - concats 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to memory. NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	arr = malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[j] != '\0')
	{
		arr[j] = s1[j];
		j++;
	}
	while (s2[i])
	{
		arr[j] = s2[i];
		i++, j++;
	}
	return (arr);
}
