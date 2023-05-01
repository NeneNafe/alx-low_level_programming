#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: Thead node of the list
 * @index: The last node
 * Return: NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int count = 0;

	while (curr != NULL)
	{
		if (count == index)
		{
			return (curr);
		}
		count++;
		curr = curr->next;
	}

	return (NULL);
}
