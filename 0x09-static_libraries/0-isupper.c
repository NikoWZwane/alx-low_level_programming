#include "main.h"

/**
 * _isupper - checks for lowercase character.
 * @c: characters to be checked
 * Return: 1 for upper car  0 for otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
