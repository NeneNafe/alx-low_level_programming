#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key variable
 * @size: the size of the array of the hash table
 *
 * Return: Index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
