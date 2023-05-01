#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the head node
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
