#include "lists.h"

/**
 * list_len - a function that returns num of elem in a list
 * @h: the pointer to the list
 * Return: number of list elems
*/

size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len(h->next));
}
