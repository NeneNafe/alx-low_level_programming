#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the first node of the list
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *nxt = NULL;


	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = nxt;
	}
	*head = current;
	return (current);
}
