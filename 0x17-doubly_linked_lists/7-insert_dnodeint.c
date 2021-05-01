#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: head of the node
 * @idx: index to be inserted at
 * @n: data of the new node
 *
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len, i;
	dlistint_t *cursor = *h;
	dlistint_t *new = NULL;

	for (len = 0; cursor != NULL; len++)
		cursor = cursor->next;
	new = malloc(sizeof(*new));
	if (len == 0 || idx >= len || new == NULL)
		return (NULL);
	new->n = n;
	cursor = *h;
	for (i = 0; i != idx; i++)
		cursor = cursor->next;
	new->next = cursor;
	new->prev = cursor->prev;
	if (cursor == *h)
	{
		cursor->prev = new;
		(*h) = new;
		return (new);
	}
	(cursor->prev)->next = new;
	cursor->prev = new;
	return (new);
}
