#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that prints a struct dog
 * @d: an element of pointer
 * @name: name of cat
 * @age: age
 * @owner: onwer of car
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
