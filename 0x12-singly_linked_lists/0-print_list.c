#include "lists.h"

/**
 * print_list - a function that prints a list's params
 * @h: the pointer to the list to print
 * Return: number of list objects
*/

size_t print_list(const list_t *h)
{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	if (h->next == NULL)
		return (1);

	return (1 + print_list(h->next));
}
