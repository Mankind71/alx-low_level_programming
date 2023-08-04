#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: num to get its index val
 * @index: index to check
 */

int get_bit(unsigned long int n, unsigned int index)
{
    if (n == 0)
    {
        return (0);
    }

    return ((n >> (index - 1)) & 1);
}
