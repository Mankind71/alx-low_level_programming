#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in memory
 *
 * @str: string to copy into memory
 *
 * Return: pointer to memory. NULL if fails
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		arr[j] = str[j];
	return (arr);
}
