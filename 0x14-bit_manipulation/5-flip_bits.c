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

	num_bits = sizeof(m) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		if(!(n >> i) & (m >> i))
            num++;
	}
    return (num);
}
