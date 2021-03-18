#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			free(head->str);
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
