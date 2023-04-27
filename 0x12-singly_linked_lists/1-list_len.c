#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: The pointer to const list_t
 * Return: Success.
 */

size_t list_len(const list_t *h)
{
	size_t num_ele = 0;

	while (h != NULL)
	{
		num_ele++;
		h = h->next;
	}
	return (num_ele);
}
