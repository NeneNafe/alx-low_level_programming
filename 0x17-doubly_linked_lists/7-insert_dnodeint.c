#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer
 * @idx: index node
 * @n: integer
 * Return: Success.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i;

	current = *h;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
	}

	if (current == NULL && idx != 0)
		return (NULL);

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else
	{
		new->next = current->next;
		current->next = new;
	}

	return (new);
}
