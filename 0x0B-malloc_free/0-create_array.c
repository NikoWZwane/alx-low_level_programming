#include <stdio.h>
#include <stdlib>
#include "main"
/**
 * create_array - creates an array
 * @size: initializes it with a specific char
 * @c: size of charecter
 *
 * Return: Nothing.
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
