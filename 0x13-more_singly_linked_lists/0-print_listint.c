#include "lists.h"

/**
 * print_listint - a function that prints all elems in list
 * @h: the pointer to the list to print
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->n)
		printf("%i\n", h->n);

	return (1 + print_listint(h->next));
}
