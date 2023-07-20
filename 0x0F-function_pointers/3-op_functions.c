#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtracts a number from another
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two numbers
 *
 * @a:  number 1
 * @b:  number 2
 *
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides a number by another number
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - finds the remainder of division
 *
 * @a: number 1
 * @b: number 1
 *
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
