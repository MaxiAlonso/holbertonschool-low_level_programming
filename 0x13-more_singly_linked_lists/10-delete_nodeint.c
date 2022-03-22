#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to the head of a list.
 * @index: index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *node = *head, *delete_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (i < index - 1 && node != NULL)
	{
		i++;
		node = node->next;
	}
	if (node == NULL || node->next == NULL)
	{
		return (-1);
	}
	delete_node = node->next;
	node->next = node->next->next;
	free(delete_node);
	return (1);
}
