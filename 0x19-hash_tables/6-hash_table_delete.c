#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *next;
	unsigned long int idx;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
		for (ptr = ht->array[idx]; ptr != NULL; ptr = next)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	free(ht->array);
	free(ht);
}
