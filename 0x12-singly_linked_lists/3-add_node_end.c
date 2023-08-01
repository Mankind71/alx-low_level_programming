#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: the pointer to the pointer to the head
 * @str: string to copy to the first elem
 * Return: number of list objects
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = *head;
	unsigned int x = 0;

	while (str[x])
		x++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (0);

	ptr->str = strdup(str);
	ptr->len = x;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}
