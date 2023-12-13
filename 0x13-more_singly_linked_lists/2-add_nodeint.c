#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @n: number of integer
 * @head: head of the node
 * Return: the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->next = *head;
	newnode->n = n;
	*head = newnode;

	return (*head);
}
