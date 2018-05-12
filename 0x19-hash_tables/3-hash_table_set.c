#include "hash_tables.h"
#include <stdlib.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;

	if (key == NULL || ht == NULL || ht->array == NULL || value == NULL)
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	newnode->key = (char *) key;
	newnode->value = (char *) value;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
