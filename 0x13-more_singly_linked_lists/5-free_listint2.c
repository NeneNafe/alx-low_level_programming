#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head node
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *next;

	if (head != NULL)
	{
		curr = *head;
		while ((next = curr) != NULL)
	{
		curr = curr->next;
		free(next);
	}
	*head = NULL;
	}
}
