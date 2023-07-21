#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 * pair should be stored in array of a hash table.
 * @key: The key to get the index of.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 alogorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
