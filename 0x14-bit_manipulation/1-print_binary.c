#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: pointer to number to be printed in binary
 *
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	int ind, count = 0;
	unsigned long int current;

	for (ind = 63; ind >= 0; ind--)
	{
		current = n >> ind;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

	}
	if (!count)
		_putchar('0');
}
