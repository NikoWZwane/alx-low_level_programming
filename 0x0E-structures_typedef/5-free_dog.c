#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that creates a new dog.
 * @d: element of pointer
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
