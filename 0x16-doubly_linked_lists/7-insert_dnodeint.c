#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts dlistint node at index
 *
 * @h: head of list
 * @idx: index of node
 * @n: value for new node
 *
 * Return: new node address, or NULL if index not accessible or malloc fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new;

	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (ptr == NULL)
		return (NULL);
	while (ptr->next != NULL && idx-- > 1)
		ptr = ptr->next;
	if (idx > 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
