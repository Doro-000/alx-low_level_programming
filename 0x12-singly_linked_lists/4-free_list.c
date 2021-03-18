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
	list_t *cursor = head;

	if (head != NULL)
	{
		while (cursor->next != NULL)
		{
			free(temp->str);
			temp = cursor->next;
			free(cursor);
			cursor = temp;
		}
	}
}
