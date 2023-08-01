#include "lists.h"

/**
 * free_listint2 - a function that adds a new node
 * at the end of a list_t list.
 * @head: the pointer to the pointer to the head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
