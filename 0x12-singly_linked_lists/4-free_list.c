#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: header node of the list
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nxt;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
