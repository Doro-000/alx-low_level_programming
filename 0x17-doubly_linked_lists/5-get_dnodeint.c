#include "lists.h"


/**
 * get_dnodeint_at_index - gets nth node of a doubly linked list
 * @head: head of the node
 * @index: index of the node required
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len, i;
	dlistint_t *cursor = head;

	for (len = 0; cursor != NULL; len++)
		cursor = cursor->next;
	if (len == 0 || index >= len)
		return (NULL);
	cursor = head;
	for (i = 0; i != index; i++)
		cursor = cursor->next;
	return (cursor);
}
