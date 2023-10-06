#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: the key to retrieve
 *
 * Return: Value, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *current;

	/* checks for invalid input conditions such as a NULL */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* calculates index where key-value pair are to be stored */
	indx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[indx];

	/* iterates through the linked list looking for a specified key */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	/* if not found return null */
	return (NULL);
}
