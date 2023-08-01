#include "lists.h"

/**
 * free_list - a function that adds a new node
 * at the end of a list_t list.
 * @head: the pointer to the pointer to the head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
