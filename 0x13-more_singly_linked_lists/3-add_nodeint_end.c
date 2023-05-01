#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: The first node
 * @n: integer input
 * Return: Always Success.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node, *last_node;

	last_node = (listint_t *) malloc(sizeof(listint_t));


	if (last_node != NULL)
	{
		return (NULL);
	}
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}

	else
	{
		current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = last_node;
	}

	return (last_node);
}
