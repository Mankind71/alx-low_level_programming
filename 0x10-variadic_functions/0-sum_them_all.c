#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums all its parameters
 *
 * @n: number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list ap;
	unsigned int a, b = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		b += va_arg(ap, int);

	va_end(ap);

	return (b);
}


/*in this function, b += va_arg(ap, int) means add*/
/* b to va_arg(ap, int) and call the new value b*/
/* and so on. that creates a loop for every input*/