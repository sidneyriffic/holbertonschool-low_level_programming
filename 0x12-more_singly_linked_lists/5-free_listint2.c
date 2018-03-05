#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint list
 *
 * @head: head of list to free
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (next = (*head)->next; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
