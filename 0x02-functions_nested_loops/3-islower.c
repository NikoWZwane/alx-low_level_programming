#include "main.h"

/**
 * main - function that checks for lowercase character
 *
 * Return: Alway
 */
int _islower(int c)
{
	if (c <= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
