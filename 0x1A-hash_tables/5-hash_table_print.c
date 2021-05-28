#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cursor = NULL;
	char **keys = NULL, **vals = NULL;
	unsigned long int i;
	size_t current_size = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cursor = ht->array[i];
			while (cursor != NULL)
			{
				keys = realloc(keys, sizeof(*keys) * (current_size + 1));
				vals = realloc(vals, sizeof(*vals) * (current_size + 1));
				keys[current_size] = malloc(sizeof(**keys) * strlen(cursor->key) + 1);
				vals[current_size] = malloc(sizeof(**vals) * strlen(cursor->value) + 1);
				strcpy(keys[current_size], cursor->key);
				strcpy(vals[current_size], cursor->value);
				cursor = cursor->next;
				current_size += 1;
			}
		}
	}
	printf("{");
	for (i = 0; i < current_size; i++)
	{
		printf("'%s': '%s'", keys[i], vals[i]);
		if (i != current_size - 1)
			printf(", ");
		free(keys[i]);
		free(vals[i]);
	}
	printf("}\n");
	free(keys);
	free(vals);
}
