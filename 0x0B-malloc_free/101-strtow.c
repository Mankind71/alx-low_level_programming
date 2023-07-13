#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_space(char c)
{
	return c == ' ' || c == '\t' || c == '\n';
}

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
	in_word = 0;
	word_index = 0;
	start_index = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			num_of_lets++;
	}
	if (!num_of_lets)
		return (NULL);
	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
		{
			if (!in_word)
			{
				in_word = 1;
				num_of_words++;
			}
		}
		else
		{
			in_word = 0;
		}
		i++;
	}
	for (i = 0; str[i]; i++)
	{
		str_len++;
	}

	arr = (char **)malloc(sizeof(char *) * (num_of_words + 1));
	if (arr == NULL)
		return (NULL);

	in_word = 0;
	for (int j = 0; j < str_len; j++)
	{
		if (!is_space(str[j]) && str[j] != '\0')
		{
			if (!in_word)
			{
				in_word = 1;
				start_index = j;
			}
		}
		else
		{
			if (in_word)
			{
				in_word = 0;
				int word_length = j - start_index;
				arr[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (arr[word_index] == NULL)
				{
					// Memory allocation failed, free previously allocated memory
					for (int k = 0; k < word_index; k++)
					{
						free(arr[k]);
					}
					free(arr);
					return (NULL);
				}
				
				for (int k = 0; k < word_length; k++)
				{

					printf("%c", str[start_index + k]);
					arr[word_index][k] = str[start_index + k];
				}
				printf("\n");
				arr[word_index][word_length] = '\0';
				word_index++;
			}
		}
	}


	return (arr);
}
