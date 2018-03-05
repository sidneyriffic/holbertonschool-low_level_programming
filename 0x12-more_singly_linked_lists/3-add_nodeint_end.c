#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a listint node to the end of a list
 *
 * @head: head of list
 * @n: value to give new node
 *
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	end = *head;
	if (end != NULL)
		while (end->next != NULL)
			end = end->next;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
	}
	else
	{
		end->next = ptr;
		ptr->next = NULL;
	}
	return (ptr);
}
