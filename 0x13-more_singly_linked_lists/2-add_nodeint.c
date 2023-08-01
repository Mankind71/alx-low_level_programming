#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: the pointer to the pointer to the head
 * @n: num of node to add to the beginning
 * Return: pointer to new elem or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (0);

	ptr->next = (*head);
	ptr->n = n;
	(*head) = ptr;

	return (*head);
}
