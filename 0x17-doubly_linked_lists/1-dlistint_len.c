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

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
