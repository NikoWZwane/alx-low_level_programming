#include "main.h"
#include <stdio.h>

/**
 * _memcpy  - prints buffer in hexa
 * @dest: the address of destination
 * @src: the size of the source
 * @n: input
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
