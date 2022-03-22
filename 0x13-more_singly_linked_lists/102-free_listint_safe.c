#include "lists.h"

/**
   * detectLoop - detect a loop in a llinked list.
   * @head: pointer to the head of the list
   * Return: 1 if ther is a loop 0 otherwise.
   **/

int detectLoopf(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head node of the list
 * Return: size of the list that was free’d
 **/

size_t free_listint_safe(listint_t **h)
{
	const listint_t *slow = *h, *fast = *h;
	int nodes = 0;


	if (h == NULL || *h == NULL)
	{
		exit(98);
	}
	if (detectLoopf(*h) == 1)
	{
		while (slow != NULL && fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
			nodes++;
			if (slow == fast)
			{
				slow = *h;
				while (slow != fast)
				{
					slow = slow->next, fast = fast->next, nodes++;
				}
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (nodes);
			}
		}
		exit(98);
	}
	else
	{
		while (*h != NULL)
		{
			*h = (*h)->next, nodes++;
		}
		return (nodes);
	}
}
