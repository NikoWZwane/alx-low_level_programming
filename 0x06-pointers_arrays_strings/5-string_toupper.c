#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change all lowercase letter
 * @str: the string
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
