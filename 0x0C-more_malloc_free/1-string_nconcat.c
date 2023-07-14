#include <stdlib.h>

/**
 * string_nconcat - concats 2 strings
 *
 * @s1: first string
 * @s2: second string
 * @n: amount of chars to concat
 * Return: pointer to memory. NULL if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		k = n;
	else
		k = j;
	arr = malloc(sizeof(char) * (i + k) + 1);
	if (arr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[j] != '\0')
	{
		arr[j] = s1[j];
		j++;
	}
	for (i = 0; i < k; i++)
	{
		arr[j] = s2[i];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
