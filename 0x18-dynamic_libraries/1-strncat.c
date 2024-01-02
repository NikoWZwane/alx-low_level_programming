#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: string two
 * @src: string one
 * @n: number of bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ind;
	int j;

	ind = 0;
	while (dest[ind] != '\0')
	{
		ind++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[ind] = src[j];
		ind++;
		j++;
	}
	dest[ind] = '\0';
	return (dest);
}
