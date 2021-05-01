#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *cursor = h;

	for (i = 0; cursor != NULL; i++)
	{
		printf("%d\n", h->n);
		cursor = cursor->next;
	}
	return (i);
}
