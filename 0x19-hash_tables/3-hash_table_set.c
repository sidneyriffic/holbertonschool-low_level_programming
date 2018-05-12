#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - set a value in a hash table
 *
 * @ht: hash table to set value in
 * @key: key string to set
 * @value: value string to set
 *
 * Return: 1 if successful, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;

	if (key == NULL || *key == 0 || ht == NULL
	    || ht->array == NULL || ht->size == 0)
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
