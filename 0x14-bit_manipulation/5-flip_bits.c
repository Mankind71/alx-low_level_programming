#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: first num
 * @m: second num
 * Return: num of num to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	int i, num_bits;
	unsigned long bits = n ^ m;

	num_bits = 63;

	for (i = num_bits; i >= 0; i--)
	{
		if ((bits >> i) & 1)
			num++;
	}
	return (num);
}
