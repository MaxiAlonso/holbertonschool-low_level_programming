#include "lists.h"

/**
 * *get_nodeint_at_index - get the data saved in the index position of a list
 * @head: pointer to the head of the list.
 * @index: position of the data to be accesed.
 * Return: data saved in the node in the index position
 * or NULL if the list does not exist
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
