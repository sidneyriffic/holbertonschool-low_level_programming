#include "lists.h"

/**
 * sum_dlistint - sums a dlistint list
 *
 * @head: head of list
 *
 * Return: sum of list elements. 0 if no list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
