#include "main.h"
/**
 * _puts_recursion - prints a string recursively
 *
 * @s: the string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
