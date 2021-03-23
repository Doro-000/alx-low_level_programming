#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous_node = NULL;
	listint_t *new_node = NULL;
	int i = 0;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node != NULL)
		{
			new_node->n = n;
			new_node->next = NULL;
		}
		while (*head != NULL)
		{
			if ((i + 1) == idx)
				previous_node = *head;
			else if (i <= idx)
			{
				if (i == 0)
				{
					new_node->next = *head;
					*head = new_node;
				}
				else
				{
					new_node->next = previous_node->next;
					previous_node->next = new_node;
				}
				return (new_node);
			}
			else
			{
				free(new_node);
				return (NULL);
			}
		}
	}
}
