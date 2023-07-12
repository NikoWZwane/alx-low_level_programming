#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destlen = 0;

	while (dest[index++])
		destlen++;
	for (index = 0; src[index] && index < n; index++)
		dest[destlen] = src[index];
	return (dest);
}
