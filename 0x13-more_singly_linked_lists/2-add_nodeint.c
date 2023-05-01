#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: A pointer to the head
 * @n: An integer
 *
 * Return: address of the new element
 * or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = (listint_t *) malloc(sizeof(listint_t));
	if (node1 == NULL)
	{
		return (NULL);
	}
	node1->n = n;
	node1->next = *head;
	*head = node1;

	return (node1);
}
