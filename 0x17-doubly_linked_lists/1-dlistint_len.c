#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked list
 * @h: the point to the header
 * Return: Always Success.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
