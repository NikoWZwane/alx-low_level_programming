#include "lists.h"
/**
 * listint_len: function that returns the number of elements in a linked listint_t list.
 * @h: pointer to lists file
 *
 *
 * Returns the number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
