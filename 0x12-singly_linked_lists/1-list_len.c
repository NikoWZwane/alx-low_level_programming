#include <stdlib.h>
#include "lists.h"
/**
 * list_len - adds a new node at the beginning of a list_t list
 * @h: point to lists file
 *
 * Return: the address of the new element, or NULL if it failed
 */
size_t list_len(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
