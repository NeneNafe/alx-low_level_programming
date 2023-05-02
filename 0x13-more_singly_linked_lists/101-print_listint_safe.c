#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: The first node in the list
 *
 * Return: Num of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
		return (count);
}
