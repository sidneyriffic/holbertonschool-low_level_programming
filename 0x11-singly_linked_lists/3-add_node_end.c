#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list_t list
 *
 * @head: node to add a node after
 * @str: string to put in new node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *newstr, *ptr;
	list_t *newnode, *lastnode = NULL;
	int len = 0;

	if (str != NULL)
	{
		ptr = (char *) str;
		while (*ptr++)
			len++;
		newstr = malloc(sizeof(char) * (len + 1));
		if (newstr == NULL)
			return (NULL);

		ptr = newstr;
		while (*str)
			*ptr++ = *str++;
	}
	else
		newstr = NULL;

	if (*head != NULL)
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newstr);
		return (NULL);
	}

	if (*head == NULL)
		*head = newnode;
	if (lastnode != NULL)
		lastnode->next = newnode;
	newnode->str = newstr;
	newnode->len = len;
	return (newnode);
}
