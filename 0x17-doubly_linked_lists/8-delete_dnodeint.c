#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to header
 * @index: index node
 * Return: Always success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev_node;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current)
	{
		if (i == index)
		{
			prev_node->next = current->next;
			if (current->next)
				current->next->prev = prev_node;
			free(current);
			return (1);
		}
		prev_node = current;
		current = current->next;
		i++;
	}
	return (-1);
}
