#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the list
 * Return: sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
