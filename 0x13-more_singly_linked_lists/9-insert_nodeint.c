#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @idx: is the index of the list where the new node
 * @n: integer pointed to lists file
 * @head: double pointer to lists file
 *
 * Return: New node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ind;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (ind = 0; tmp && ind < idx; ind++)
	{
		if (ind == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
