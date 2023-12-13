#include "lists.h"

/**
 * free_listint - function to free a listint_t list
 * @head: head of node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
