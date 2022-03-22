#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head node of the list.
 * Return: pointer to the first node of the reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *current = *head;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	while (current->next != NULL)
	{
		next = current->next;
		current->next = next->next;
		next->next = *head;
		*head = next;
	}
	return (*head);
}
