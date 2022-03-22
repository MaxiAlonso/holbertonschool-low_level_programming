#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;
	int nodes = 0;

	slow = head, fast = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			printf("Loop starts at [%p] %d\n", (void *)slow, slow->n);
			return (slow);
		}
	}
	return (NULL);
}
