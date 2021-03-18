#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string to be used as content of the node
 *
 * Return: address of the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if ((new_node != NULL) && (*head != NULL))
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
