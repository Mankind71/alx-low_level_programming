#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimun num of coins to make change
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, num_change = 0, i = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (cents != 0)
		{
			if (cents < change[i])
			{
				i++;
				continue;
			}
			cents -= change[i];
			num_change += 1;
		}
		printf("%d\n", num_change);
	}
	return (0);
}
