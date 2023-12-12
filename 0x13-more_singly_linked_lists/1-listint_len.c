#include "lists.h"

/**
 * listint_len - the numbers of element in a linked listint_t
 * @h: head of node
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return (0);
	for (nodes = 0 ; h != NULL ; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
