#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head node
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*head = NULL;
}
