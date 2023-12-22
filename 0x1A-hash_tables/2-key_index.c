#include "hash_tables.h"
/**
 * key_index - returns the index of a key
 * @key: key that we will get the index for
 * @size: size of hash table
 *
 * Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}
