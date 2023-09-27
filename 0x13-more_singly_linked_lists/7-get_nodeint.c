#include "lists.h"
/**
 * get_nodeint_at_index -  nth node of a listint_t linked list
 * @index:node in the list file  the index of the node
 * @head: pointer to list file
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  ind = 0;
	listint_t *tmp = head;

	while (tmp && ind < index)
	{
		tmp = tmp->next;
		ind++;
	}
	return (tmp ? tmp : NULL);
}
