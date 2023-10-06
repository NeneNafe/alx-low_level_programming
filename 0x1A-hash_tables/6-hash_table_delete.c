#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the has table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *next;

	/* prints nothing if ht is NULL  */
	if (ht == NULL)
		return;

	/* iterates through the entire hash table, visiting each index in the array */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
	/* it traverses the linked-list of nodes& frees the mem allocated */
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	free(ht->array);
	free(ht);
}
