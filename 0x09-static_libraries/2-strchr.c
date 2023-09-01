#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates
 * @s: in the string
 * @c: occurrence of the charact
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
