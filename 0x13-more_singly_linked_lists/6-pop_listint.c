#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list.
 * Return: the head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	listint_t *temp_node = *head;
	int data;

	data = 0;

	if (*head != NULL)
	{
		*head = temp_node->next;
		data = temp_node->n;
		free(temp_node);
	}
	return (data);
}
