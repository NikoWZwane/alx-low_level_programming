#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *previous = NULL;
	unsigned int i = 0;

	while (current != NULL)
	{
	if (i == index)
	{
		if (previous == NULL)
		*head = current->next;

		previous->next = current->next;

		if (current->next != NULL)
		current->next->prev = previous;
		free(current);
	return (1);
	}

		previous = current;
		current = current->next;
		i++;
	}

	return (-1);
}
