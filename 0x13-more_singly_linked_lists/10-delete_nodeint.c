#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success and -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
{
	listint_t *temp = NULL;
	int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if ((i + 1) == index)
			{
				temp = *head;
				(*head)->next = new_node;
				break;
			}
			head = &((*head)->next);
			i++;
		}
		else
			return (-1);
	}
	return (new_node);
}
