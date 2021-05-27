#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the hash table
 *
 * Return: address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	hash_node_t **bucket = NULL;
	unsigned long int i;

	hash_table = malloc(sizeof(*hash_table));
	if (hash_table == NULL)
		return NULL;
	bucket = malloc(sizeof(*bucket) * size);
	if (bucket == NULL)
	{
		free(hash_table)
		return NULL;
	}
	for (i = 0; i < size; i++)
		bucket[i] = NULL;
	hash_table->size = size;
	hash_table->array = bucket;
	return (hash_table);
}
