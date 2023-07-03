#include "main.h"

/**
 * _isdigit - check the for for digit
 * @c: check c
 * Return: 1 for digit and 0 for otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <=57)
	{
	return(1);
	}
	return(0);
}
