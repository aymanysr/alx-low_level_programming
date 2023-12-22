#include "hash_tables.h"

/**
 * hash_table_set - adds a key/value to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key (cannot be an empty str)
 * @value: value associated with the key.(value can be an empty str)
 *
 * Return: 1 on Success, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node;
	hash_node_t *current_node;

	if (!ht || !key || !value)
		return (0);

	idx = hash_djb2((unsigned char *)key) % ht->size;

	/*Check if the key already exists and update the value if so*/

	current_node = ht->array[idx];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (!current_node->value)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	/*If the key does not exist, create a new node and add it to the hash table*/
	new_node = hash_node_create(key, value);
	if (!new_node)
		return (0);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
/**
 * hash_node_create - create a new hash node
 * @key: key of the node
 * @value: value of the node
 *
 * Return: new node, NULL otherwise
*/

	/*Create a new node & instert it at the beginning of the linked list*/
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
