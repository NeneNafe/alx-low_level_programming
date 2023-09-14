#include "lists.h"

/**
 * sum_dlistint - return the sum of all elements in a list
 * @head: pointer to head
 * Return: 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
