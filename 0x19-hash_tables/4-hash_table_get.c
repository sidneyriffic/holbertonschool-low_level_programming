#define _GNU_SOURCE
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - get value at hash table key
 *
 * @ht: hash table to get from
 * @key: key to get value of
 *
 * Return: value if success, NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 ||
	    key == NULL || *key == 0)
		return (NULL);
	index = hash_djb2((const unsigned char *) key);
	index %= ht->size;
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			break;
	}
	if (ptr == NULL)
		return (NULL);
	return (strdup(ptr->value));
}
