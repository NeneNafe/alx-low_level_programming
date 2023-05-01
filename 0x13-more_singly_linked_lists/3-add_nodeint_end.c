#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: The first node
 * @n: integer input
 * Return: Always Success.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (last_node);
}
