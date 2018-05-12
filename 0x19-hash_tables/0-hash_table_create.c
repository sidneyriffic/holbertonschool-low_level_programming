#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int idx;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
		return (NULL);

	newtable->size = size;
	for (idx = 0; idx < size; idx++)
		newtable->array[idx] = NULL;
	return (newtable);
}
