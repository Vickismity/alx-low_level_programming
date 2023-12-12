#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of node
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *amp;
	size_t i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	newnode->len = count;
	amp = *head;

	if (amp != NULL)
		*head = newnode;
	else
	{
		while (amp->next != NULL)
			amp = amp->next;
		amp->next = newnode;
	}
	return (*head);
}
