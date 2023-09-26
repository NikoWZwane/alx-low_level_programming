#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @n: integer pointed in a lists file
 * @head: head pointer in a list file
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nod;
	listint_t *tmp = *head;

	new_nod = malloc(sizeof(listint_t));

	if (!new_nod)
		return (NULL);
	new_nod->n = n;
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
		return (new_nod);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_nod;

	return (new_nod);
}

