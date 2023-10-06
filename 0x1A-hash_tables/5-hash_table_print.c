#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: if NULL, print Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int first = 1; /* a flag to track whether it's the first element */

	if (ht == NULL)
		return; /* if NULL, don't print anytihng */

	/* Iterates through the entire hash table */
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (!first)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			first = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
