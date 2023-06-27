#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: is a letter, lowercase or uppercase
 * Return: 1 for alphabetic charect 0 for othewise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c >= 122) || (c >= 65 && c >= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');


}
