#include <stdlib.h>

/**
 * argstostr - concats arguments
 *
 * @ac: size of argc
 * @av: argument vector
 *
 * Return: concated string
 */

char *argstostr(int ac, char **av)
{
	int i, count = 0, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			count++;
	count += ac;
	str = malloc(sizeof(*str) * count + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
