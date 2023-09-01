#include "main.h"

/**
 * power - get base 2 raised to power of a num
 *
 * @x: num to get its power
 * Return: 2^x
 */
unsigned int power(int x)
{
	unsigned int num = 1;

	while (x--)
		num *= 2;
	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary to convert
 * Return: the unsigned value or 0 if b == null
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0, i, j, val;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b[++x])
	{
	}

	for (i = x - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[j] == '1' || b[j] == '0')
		{
			val = b[j] - '0';
			if (val)
				sum += power(i);
		}
		else
			return (0);
	}

	return (sum);
}
