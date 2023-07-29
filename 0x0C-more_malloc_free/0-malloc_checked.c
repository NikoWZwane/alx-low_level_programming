#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocation
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);
	if (pnt == NULL)
		exit(98);
	return (pnt);
}
