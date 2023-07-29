#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: memory for an array
 * @size: bytes to the allocated memory
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *pnt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	pnt = malloc(l);
	if (pnt == NULL)
		return (NULL);
	while (i < l)
	{
		pnt[i] = 0;
		i++;
	}
	return (pnt);
}
