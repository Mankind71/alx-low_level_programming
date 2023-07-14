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
	int i, num_of_words, num_of_lets, z, k, l, j;
	int str_len;
	int in_word, word_index, start_index;
	int word_length;

	in_word = z = 0;
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
	while (str[z] != '\0')
	{
		if (!is_space(str[z]))
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
		z++;
	}
	for (i = 0; str[i]; i++)
	{
		str_len++;
	}

	printf("%ld\n",strlen("xade"));
	arr = (char **)malloc(sizeof(char *) * (num_of_words + 1));
	if (arr == NULL)
		return (NULL);

	in_word = 0;
	for (j = 0; j < str_len; j++)
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
				word_length = j - start_index;
				arr[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (arr[word_index] == NULL)
				{
					for (k = 0; k < word_index; k++)
					{
						free(arr[k]);
					}
					free(arr);
					return (NULL);
				}

				for (l = 0; l < word_length; l++)
				{
					arr[word_index][l] = str[start_index + l];
				}
				arr[word_index][word_length] = '\0';
				word_index++;
			}
		}
	}

	arr[num_of_words] = NULL;

	return (arr);
}
