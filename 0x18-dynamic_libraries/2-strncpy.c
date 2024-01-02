#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: string destination
 * @src: source string
 * @n: number of bytes
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srclen = 0;

	while (src[index++])
		srclen++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = srclen; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
