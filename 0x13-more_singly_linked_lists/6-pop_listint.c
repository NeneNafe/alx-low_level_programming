#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t list
 * and returns the head node's data(n)
 * @head: The head of the list
 *
 * Return: Success.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
