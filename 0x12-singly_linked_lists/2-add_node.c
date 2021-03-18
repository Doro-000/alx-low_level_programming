#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	const char *string;
	list_t *new_node;
	list_t *temp;
	
	new_node = malloc(sizeof(list_t));
	if ((new_node != NULL) && (*head != NULL))
	{
		new_node->str = stdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
