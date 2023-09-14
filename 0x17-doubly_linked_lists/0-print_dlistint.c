#include "lists.h"

/**
 * print_dlistint - prints all the elements in the struct
 * @h: the pointer to the list
 * Return: Success.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
