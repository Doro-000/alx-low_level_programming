#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: the address of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
{
	listint_t *new_node = NULL;
	int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				new_node->next = (*head)->next;
				(*head)->next = new_node;
				break;
			}
			head = &((*head)->next);
			i++;
		}
		else
			return (NULL);
	}
	return (new_node);
}
