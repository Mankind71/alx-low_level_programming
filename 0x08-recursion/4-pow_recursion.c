#include "main.h"

/**
 * _pow_recursion - return factorialvalue of x raised to
 * of y
 *
 * @x: base number
 * @y: power
 *
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));

}
