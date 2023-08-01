#include "lists.h"

/**
 * listint_len - a function that returns num of elem in a list
 * @h: the pointer to the list
 * Return: number of list elems
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + listint_len(h->next));
}
