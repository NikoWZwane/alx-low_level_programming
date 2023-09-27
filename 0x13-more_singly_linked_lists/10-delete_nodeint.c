#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer to list file
 * @index: node to be deleted
 *
 * Return: 1 if it succeeded, -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ind;
	listint_t *tmp = *head;
	listint_t *nex_node = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);

		return (1);
	}
	while (ind < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		ind++;
	}
	nex_node = tmp->next;
	tmp->next = nex_node->next;
	free(nex_node);

	return (1);
}

