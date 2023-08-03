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
	int x = 0, i, val;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b[++x])
	{
	}

	for (i = 0; i < x; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			val = b[i] - '0';
			if (val == 1)
				sum += val * power(x - i - 1);
		}
		else
			return (0);
	}

	return (sum);
}
