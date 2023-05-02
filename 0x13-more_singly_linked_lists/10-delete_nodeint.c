#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a litsint_t
 * @head: the node in the list
 * @index: The index node
 *
 * Return: 1 if successfull, -1 it is fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node, *prev_node;
	unsigned int i;

	if (!(*head))
		return (-1);
	i = 0;
	prev_node = NULL;
	curr_node = *head;
	if (!index)
	{
		(*head) = (*head)->next;
		free(curr_node);
		return (1);
	}
	while (curr_node)
	{
		if (i == index)
		{
			prev_node->next = curr_node->next;
			free(curr_node);
			return (1);
		}
		prev_node = curr_node;
		curr_node = curr_node->next;
		i++;
	}
	return (-1);
}
