#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - fnx that prints numbers
 *
 * @separator: their separators
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("\n");
		}
	}
	va_end(ap);
}
