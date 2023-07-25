#include <stdio.h>

/**
 * _strlen -  returns the length of a string
 * @s: pointed string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	size_t  length = 0;

	while (*s++)
		length++;
	return (length);
}
