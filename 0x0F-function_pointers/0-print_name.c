#include <stddef.h>

/**
 * print_name - prints a name
 * 
 * @name: name to print
 * @f: pointer to the name
 * 
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
