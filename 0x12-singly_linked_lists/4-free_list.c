#include <stdlib.h>
#include "lists.h"
/**
 * free_list - that frees list_t list.
 * @head: point to list file
 *
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
