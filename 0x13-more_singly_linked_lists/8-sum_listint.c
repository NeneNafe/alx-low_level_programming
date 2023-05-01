#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: the head node of the list
 * Return: 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
