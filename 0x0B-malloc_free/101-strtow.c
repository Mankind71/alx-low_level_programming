#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words.
 *
 * @str: string to split
 *
 * Return: pointer to words
 */

char **strtow(char *str)
{
	char **arr;
	int i, num_of_words;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i-1] != ' ')
			num_of_words++;
	}
	num_of_words++;
	printf("%d\n",num_of_words);
	arr = malloc(sizeof(char *) * (num_of_words + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i-1] != ' ')
			
	}
	printf("\n");
	return (arr);
}
