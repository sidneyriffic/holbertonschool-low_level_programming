#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a listint_t node at index in list
 *
 * @head: head of list
 * @idx: index to add node at, starting at 0
 * @n: value of node to add
 *
 * Return: new node address if success, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev;

	if (head == NULL)
		return (NULL);
	if (idx == 0 && *head == NULL)
		return (add_nodeint_end(head, n));

	for (ptr = *head; idx && ptr != NULL; idx--, ptr = ptr->next)
		prev = ptr;
	if (idx)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->next = prev->next;
	prev->next = ptr;
	ptr->n = n;
	return (ptr);
}
