#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: the pointer to the header
 * @n: Interger variable
 * Return: address of new element
 * or NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
