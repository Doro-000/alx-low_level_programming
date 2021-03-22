#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the list
 *
 * Return: the deleted node's data
 */
int pop_listint(listint_t **head)
{
	int content;
	listint_t *next;

	if (*head == NULL)
		return (0);
	content = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (content);
}
