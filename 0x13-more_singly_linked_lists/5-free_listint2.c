#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL.
 * @head: pointer to the head of the list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
	else
	{
		return;
	}
}
