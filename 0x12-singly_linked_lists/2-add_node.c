#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: the pointer to the pointer to the head
 * @str: string to copy to the first elem
 * Return: number of list objects
 */

size_t add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	unsigned int x = 0;

	while (str[x])
		x++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (0);

	ptr->next = head;
	ptr->str = strdup(str);
	ptr->len = x;
	*head = ptr;

	return (*head);
}
