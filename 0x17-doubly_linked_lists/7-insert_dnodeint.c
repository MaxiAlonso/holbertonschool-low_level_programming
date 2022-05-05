#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head node of the linked list.
 * @idx: ndex of the list where the new node should be added. Index starts at 0
 * @n: data to be stored in the new node.
 * Return: the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new_node, *current_node, *prev_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
	}
	else
	{
		current_node = *h;
		while (current_node != NULL)
		{
			prev_node = current_node->prev;
			if (index == idx)
			{
				if (idx == 0)
				{
					new_node->prev = NULL;
					new_node->next = current_node;
					*h = new_node;
				}
				else
				{
					prev_node->next = new_node;
					new_node->next = current_node;
					new_node->prev = current_node->prev;
				}
			}
			index++;
			current_node = current_node->next;
		}
		return (new_node);
	}
	return (NULL);
}
