#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * num_isdigit - check if num is digit.
 *
 * @num: num to check
 *
 * Return: 1 if digit, 0 otherwise
 */

int num_isdigit(char *num)
{
	int j;
	int is_digit = 1;

	for (j = 0; num[j] != '\0'; j++)
	{
		if (!isdigit(num[j]))
		{
			is_digit = 0;
			break;
		}
	}

	if (is_digit)
		return (1);
	else
		return (0);
}

/**
 * main - multiplies two positive numbers.
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: the product
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!num_isdigit(argv[1]) || !num_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
