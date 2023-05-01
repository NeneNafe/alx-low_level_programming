#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: The head of the first node
 * Return: length of the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
