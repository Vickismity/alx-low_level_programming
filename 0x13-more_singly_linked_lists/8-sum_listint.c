#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of te node
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	for (sum = 0 ; head != NULL ;)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
