#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: given position.
 * @n: data to add.
 * Return: ddress of the new node, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node = *head;
	unsigned int count;

	count = 0;

	if (*head != NULL || head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		while (prev_node != NULL)
		{
			if (count == idx - 1)
			{
				new_node->n = n;
				new_node->next = prev_node->next;
				prev_node->next = new_node;
				return (new_node);
			}
			prev_node = prev_node->next;
			count++;
		}
	}
	return (NULL);
}
