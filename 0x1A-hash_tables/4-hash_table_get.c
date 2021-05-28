#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cursor = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	else
	{
		cursor = ht->array[index];
		while (cursor != NULL)
		{
			if (strcmp(cursor->key, key) == 0)
				return (cursor->value);
			else
				cursor = cursor->next;
		}
		return(NULL);
	}
}