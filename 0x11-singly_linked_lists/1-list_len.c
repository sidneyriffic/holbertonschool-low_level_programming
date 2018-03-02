#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns number of nodes starting at element h
 *
 * @h: first node of linked list to count from
 *
 * Return: number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
