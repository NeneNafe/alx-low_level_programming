#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the array
 * Return: NULL, if something goes wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to the sortted hash table
 * @ht: the sorted hash table
 * @value: the value associated with the key
 * @ket: the key used
 * Return: 1 is succeded, 0 otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	char *value_copy;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return (1);
		}
		temp = temp->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node->key == NULL)
	{
		free(value_copy);
		return (0);
	}

	new_node->value = value_copy;
	new_node->next = ht->array[indx];
	ht->array[indx] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->next = NULL;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->next != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_node;
		else
			temp->snext->sprev = new_node;
		temp->snext = new_node;
	}

	return (1);
}
/**
 * shash_table_get - retrieves a value key from a sorted hash table
 * @ht: the sorted hash table to search in
 * @key: The key to look up
 * Return: NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int indx;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}
/**
 * shash_table_print - prints a sorted hashed table
 * @ht: the sorted hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints the sorted hash table in reverse
 * @ht: the sorted hash table to be reversed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
	shash_table_t *head = ht;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}

	free(head->array);
	free(head);
}
