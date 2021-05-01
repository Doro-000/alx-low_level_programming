#include "lists.h"


/**
 * sum_dlistint - sums up all the data of a doubly linked list
 * @head: head of the node
 *
 * Return: the sum of all the elements
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int len, sum = 0;
	dlistint_t *cursor = head;

	for (len = 0; cursor != NULL; len++)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
