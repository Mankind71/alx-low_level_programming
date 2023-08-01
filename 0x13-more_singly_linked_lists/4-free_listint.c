#include "lists.h"

/**
 * free_listint - a function that adds a new node
 * at the end of a list_t list.
 * @head: the pointer to the pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
