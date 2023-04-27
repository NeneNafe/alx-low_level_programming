#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: the fist node
 * @str: the stirng variable
 *
 * Return: address of new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

		new_node->len = i;
		new_node->next = *head;
		*head = new_node;


	return (*head);
}
