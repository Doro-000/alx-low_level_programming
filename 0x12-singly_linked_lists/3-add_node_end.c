#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *cursor = *head;
	
	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_node;
	}
	else
		cursor = new_node;
	return (new_node);
}
