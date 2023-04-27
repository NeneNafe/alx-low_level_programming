#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the list_t
 *
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}
