#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head of doubly linked list
 * @idx: index of the list where the new node should be added.
 * @n: data to insert into new node
 * Return: address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *temp = *h;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (counter < idx - 1)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
		counter++;
	}

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
