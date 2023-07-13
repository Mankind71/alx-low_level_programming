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
	int i, num_of_words, num_of_lets;
	int str_len;
	int in_word, word_index, start_index;
	in_word = word_index = start_index = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] == ' ' || str[i] == '\0') && str[i - 1] != ' ')
			num_of_words++;
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			num_of_lets++;
	}
	while (*str)
	{
		str_len++;
		str++;
	}

	
	if (!num_of_lets)
		return (NULL);
	
	printf("%d\n", str_len);
	printf("%d\n", num_of_words);
	printf("%d\n", num_of_lets);
	arr = (char**)malloc(sizeof(char *) * (num_of_words + 1));
	if (arr == NULL)
		return (NULL);

	for (int j = 0; j < num_of_words; j++)
	{
		arr[j] = (char*)malloc(sizeof(char) * 4);
		if (arr[j] == NULL)
		{
			return (NULL);
		}
		for (int k = 0; k < 3; k++)
		{
			if (*str != ' ')
			{
				arr[j][k] = *str;
			}
			else
			{
				while (*str == ' ')
				{
					str++;
				}
				arr[j][k] = *str;
			}
			str++;
		}
		arr[j][3] = '\0';
	}
	arr[num_of_words] = '\0';

	printf("\n");
	return (arr);
}
