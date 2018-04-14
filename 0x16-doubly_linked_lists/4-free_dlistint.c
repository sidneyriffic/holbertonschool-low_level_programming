#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 *
 * @head: head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
