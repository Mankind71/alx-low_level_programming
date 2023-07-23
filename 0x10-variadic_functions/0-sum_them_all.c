#include <stdarg.h>

/**
 * sum_them_all - function that sums its parameters
 *
 * @n: the number of variable params
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: its sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	sum = 0;
	if (n == 0)
		return 0;
	
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
