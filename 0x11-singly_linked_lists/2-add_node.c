#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to a list_t list
 *
 * @head: node to add a node after
 * @str: str to put into struct
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *newstr, *ptr;
	list_t *newnode;
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

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(newstr);
		return (NULL);
	}

	if (*head != NULL)
		newnode->next = *head;
	newnode->str = newstr;
	newnode->len = len;
	*head = newnode;
	return (newnode);
}
