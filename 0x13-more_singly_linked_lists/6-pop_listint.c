#include "lists.h"
/**
 * pop_listint -  function that frees a list
 * @head:double point  to be freed in lists file
 *
 *
 * Return : Always );
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num_node;

	if (!head || !*head)
		return (0);
	num_node = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num_node);
}
