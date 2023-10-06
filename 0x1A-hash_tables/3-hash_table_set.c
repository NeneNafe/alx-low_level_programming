#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @key: the key used
 * @value: value associated with the key
 * @ht: the elem to be inserted
 *
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;
	unsigned long int indx;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	/* checks if the input values are valid */

	indx = key_index((const unsigned char *)key, ht->size);
	/* calculates the index where the key-value pair would be stored */
	new_node = malloc(sizeof(hash_node_t));
	/* creates a new node to hold key and value */
	if (new_node == NULL)
		return (0);
	/* the statements dup the key and value to ensure they're safely stored */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	if (value == NULL)
		value_copy = strdup("");
	else
		value_copy = strdup(value);

	if (value != NULL && value_copy == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/*intitializes the new node */
	new_node->value = value_copy;
	new_node->next = NULL;
	if (ht->array[indx] != NULL)
		new_node->next = ht->array[indx];
	ht->array[indx] = new_node;
	return (1);
}
