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
	int index = 0, srclen = 0;

	while (src[index++])
		srclen++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = srclen; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
