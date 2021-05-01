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

	if (h == NULL)
		return (NULL);
	for (len = 0; cursor != NULL; len++)
		cursor = cursor->next;
	new = malloc(sizeof(*new));
	if (idx > len || new == NULL)
		return (NULL);
	new->n = n;
	if (len == 0) /*empty list, idx = 0*/
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	cursor = *h;
	for (i = 0; i != idx && cursor->next != NULL; i++)
		cursor = cursor->next;
	if (idx == len) /*end of the list*/
	{
		cursor->next = new;
		new->prev = cursor;
		new->next = NULL;
		return (new);
	}
	new->next = cursor;
	new->prev = cursor->prev;
	if (cursor == *h) /*beginning of the list*/
	{
		cursor->prev = new;
		(*h) = new;
		return (new);
	}
	(cursor->prev)->next = new; /*middle of the list*/
	cursor->prev = new;
	return (new);
}
