#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index in a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve
 * Return: NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int p = 0;

	while (head != NULL && p < index)
	{
		head = head->next;
		p++;
	}

	return (head);
}
