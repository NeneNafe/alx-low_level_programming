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
	unsigned long int indx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value  == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	/* calculates the index where the key-value pair would be stored */
	indx = key_index((const unsigned char *)key, ht->size);
	for (i = indx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[indx];
	ht->array[indx] = new_node;

	return (1);
}
