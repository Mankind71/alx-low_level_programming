#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to print
 */


void print_binary(unsigned long int n)
{
	int i, num_bits, bit;
	int leadingZeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	num_bits = 32;

	for (i = num_bits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
		{
			leadingZeros = 0;
			_putchar(bit + '0');
		} else if (!leadingZeros)
		{
			_putchar(bit + '0');
		}
	}
	printf("\n");
}
