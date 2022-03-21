#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: pointer to the head of the list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*head = NULL;
}
