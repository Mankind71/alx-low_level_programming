#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: pointer param str
 *
 * Return: null
 */

void _puts(char *str)
{
	int i = 0;

	while (*str++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
