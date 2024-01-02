#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: is lowercase
 * Return: 1 for lower case or 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
