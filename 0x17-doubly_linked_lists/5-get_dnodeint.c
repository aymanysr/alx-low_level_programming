#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of doubly linked list
 * @index: index of node to return
 * Return: nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (counter < index)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
		counter++;
	}
	return (temp);
}
