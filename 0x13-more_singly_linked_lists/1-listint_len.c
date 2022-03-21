#include "lists.h"

/**
 * listint_len - function that returns the number of elements.
 * @h: pointer.
 * Return: number of elements in a linked listint_t list.
 **/

size_t listint_len(const listint_t *h)
{
	int nodes;

	nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
