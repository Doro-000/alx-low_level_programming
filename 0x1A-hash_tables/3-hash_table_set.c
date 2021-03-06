#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key to be used, cannot be an empty string
 * @value:  is the value associated with the key
 *
 * Return: index of the key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *cursor = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	if (ht->size == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
		return (0);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		cursor = ht->array[index];
		while (cursor != NULL && strcmp(cursor->key, key) != 0)
			cursor = cursor->next;
		if (cursor != NULL)
		{
			free(cursor->value);
			cursor->value = strdup(value);
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		return (1);
	}
}
