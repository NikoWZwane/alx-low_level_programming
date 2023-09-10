#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc -  reallocates a memory block using
 * @old_size: is the size, in bytes, of the allocated space
 * @new_size: bytes of the new memory block
 * @ptr: prints buffer in hexa
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}
	free(nptr);
	return (nptr);
}
