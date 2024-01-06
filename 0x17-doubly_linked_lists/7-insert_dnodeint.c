#include "lists.h"
/**
 * insert_dnodeint_at_index - add new node at a given position
 * @h: head
 * @n: number of new node
 * @idx: index of node
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *head = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		while (head != NULL && i < idx - 1)
	{
		head = head->next;
		i++;
	}

	if (head != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new != NULL)
		{
			new->n = n;

			if (head->next != NULL)
			head->next->prev = new;
			new->next = head->next;
			new->prev = head;
			head->next = new;
		}
	}
	}

	return (new);
}
