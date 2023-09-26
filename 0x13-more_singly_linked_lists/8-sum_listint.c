#include "lists.h"
/**
 * sum_listint - the sum of all the data
 * @head: pointer to lists file
 *
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum_data += tmp->n;
		tmp = tmp->next;
	}
	return (sum_data);
}
