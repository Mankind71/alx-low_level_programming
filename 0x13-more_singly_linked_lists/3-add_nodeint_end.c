#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: the pointer to the pointer to the head
 * @n: int to add to the last node elem
 * Return: pointer to last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (0);

	ptr->n = n;
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
