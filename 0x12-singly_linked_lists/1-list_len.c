#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list
 * @h: singly linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0 ; h != NULL ; nodes++)
		h = h->next;
	return (nodes);
}
