#include "hash_tables.h"
#include <string.h>

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	index = hash_djb2((const unsigned char *) key);
	index %= ht->size;
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp( ptr->key, key) == 0)
			break;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr->value);
}
