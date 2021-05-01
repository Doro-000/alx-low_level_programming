#include "lists.h"


/**
 * dlistint_len - counts the number of nodes in a linked list
 * @h: head of the node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *cursor = h;

	for (i = 0; cursor != NULL; i++)
		cursor = cursor->next;
	return (i);
}
