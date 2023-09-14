#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to header
 * @index: index of the node
 * Return: Null if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}

	return (current);
}
