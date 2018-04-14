#include "lists.h"

/**
 * delete_dnodeint_at_index - delete dlistint node at index
 *
 * @head: head of list
 * @index: index of node
 *
 * Return: new node address, or NULL if index not accessible or malloc fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *ptrn;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr->next != NULL && index-- > 1)
		ptr = ptr->next;
	if (index > 1 || ptr->next == NULL)
		return (-1);
	ptrn = ptr->next;
	ptr->next = ptrn->next;
	if (ptr->next != NULL)
		ptr->next->prev = ptr;
	free(ptrn);
	return (1);
}
