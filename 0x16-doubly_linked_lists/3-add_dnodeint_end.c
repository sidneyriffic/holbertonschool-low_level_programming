#include "lists.h"

/**
 * add_dnodeint_end - add dlistint node to end of list
 *
 * @head: head of list
 * @n: value of node
 *
 * Return: NULL if failure, node address otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	ptr = *head;
	if (ptr != NULL)
		while (ptr->next != NULL)
			ptr = ptr->next;
	new->n = n;
	new->next = NULL;
	new->prev = ptr;
	if (ptr != NULL)
		ptr->next = new;
	else
		*head = new;
	return (new);
}
