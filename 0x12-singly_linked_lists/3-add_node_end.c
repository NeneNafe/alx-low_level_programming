#include "lists.h"

/**
 * *add_node_end - add a new node at the end of a list_t list
 * @head: the fist node in the list
 * @str: string
 * Return: address of a new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new_ele;
	list_t *dup;
	size_t j;

	new_ele = malloc(sizeof(list_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->str = strdup(str);


	for (j = 0; str[j]; j++)
		;

	new_ele->len = j;
	new_ele->next = NULL;
	dup = *head;

	if (dup == NULL)
	{
		*head = new_ele;
	}
	else
	{
		while (dup->next != NULL)
			dup = dup->next;
		dup->next = new_ele;
	}

	return (*head);
}
