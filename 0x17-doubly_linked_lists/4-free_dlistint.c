#include "lists.h"


/**
 * free_dlistint - frees a list
 * @head: pointer to header
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node;

	while (head != NULL)
	{
		curr_node = head;
		head = head->next;
		free(curr_node);
	}
}
