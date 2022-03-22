#include "lists.h"

/**
   * detectLoop - detect a loop in a llinked list.
   * @head: pointer to the head of the list
   * Return: 1 if ther is a loop 0 otherwise.
   **/

int detectLoop(const listint_t *head)
{
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 * exit with status 98 if function fails.
 **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	int nodes = 0;

	slow = head, fast = head;

	if (head == NULL)
	{
		exit(98);
	}
	if (detectLoop(head) == 1)
	{
		while (fast != NULL && fast->next != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			fast = fast->next->next;
			nodes++;
			if (slow == fast)
			{
				slow = head;
				while (slow != fast)
				{
					printf("[%p] %d\n", (void *)fast, fast->n);
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
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next, nodes++;
		}
		return (nodes);
	}
}
