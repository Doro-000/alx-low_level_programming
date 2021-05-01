#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
//change return type
int print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
