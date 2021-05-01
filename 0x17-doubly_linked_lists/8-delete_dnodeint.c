#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: head of the node
 * @index: index to be deleted at
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len, i;
	dlistint_t *cursor = *head;

	if (head == NULL)
		return (-1);
	for (len = 0; cursor != NULL; len++)
		cursor = cursor->next;
	if (len == 0 || index >= len)
		return (-1);
	cursor = *head;
	for (i = 0; i != index; i++)
		cursor = cursor->next;
	if (cursor == *head)
	{
		(*head) = cursor->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(cursor);
		return (1);
	}
	(cursor->prev)->next = cursor->next;
	if (cursor->next != NULL)
		(cursor->next)->prev = cursor->prev;
	free(cursor);
	return (1);
}
