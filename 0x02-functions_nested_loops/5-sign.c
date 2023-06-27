#include "main.h"

/**
 * print_sign - that prints the sign of a number
 * @n: for zero
 * Return: 1 for positive n -1 for negative n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
