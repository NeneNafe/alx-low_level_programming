#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: The first node in the list
 * @idx: the index node
 * @n: integer input
 *
 * Return: NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr;
	unsigned int i;

	curr = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && curr != NULL; i++)
		{
			curr = curr->next;
		}
	}

	if (curr == NULL && idx != 0)
		return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = curr->next;
		curr->next = new;
	}

	return (new);
}
