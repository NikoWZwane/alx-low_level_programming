#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_t *add_node -  adds a new node at the beginning of a list_t list
 * @str: string needs to be duplicated
 * @head: double pointer to lists file
 * @new_nod - the address of the new element
 *
 * Return: the address of the new element,
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nod;
	unsigned int len = 0;

	while (str[len])
		len++;
	new_nod = malloc(sizeof(list_t));
	if (!new_nod)
		return (NULL);
	new_nod->str = strdup(str);
	new_nod->len = len;
	new_nod->next = (*head);
	(*head) = new_nod;
	return (*head);
}
