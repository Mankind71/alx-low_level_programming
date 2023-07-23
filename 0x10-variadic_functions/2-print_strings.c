#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * 
 * @separator: its separator
 * @n: num of args
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *))
			printf("%s", va_arg(ap, char *));
		else
			printf("nil");
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