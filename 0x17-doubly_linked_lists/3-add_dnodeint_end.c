#include "lists.h"


/**
 * add_dnodeint_end - inserts a node at the end of a linked list
 * @head: head of the node
 * @n: data of the node
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new = NULL;
	dlistint_t *cursor = *head;

	new = malloc(sizeof(*new));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	for (i = 0; cursor->next != NULL; i++)
		cursor = cursor->next;
	cursor->next = new;
	new->prev = cursor;

	return (new);
}
