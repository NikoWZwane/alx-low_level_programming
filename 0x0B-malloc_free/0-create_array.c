#include <stdio.h>
#include <stdlib>
#include "main"
/**
 * create_array - creates an array
 * @size
 * @c:
 *
 * Return: 
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *S;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
