#include "hash_tables.h"
/**
 * hash_table_get - gets the value of the given key
 * @ht: the hash table to check
 * @key: the key to look for
 *
 * Return: value associated with the element,or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
