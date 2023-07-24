#include "main.h"

/**
 * print_times - that prints the n times table, starting with 0
 * @n: number
 * Return: Always 0.
 *
 */
void print_times_table(int n)
{
	int num, mult, prd;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prd = num * mult;
		if (prd <= 99)
			_putchar(' ');
		if (prd <= 0)
			_putchar(' ');
		if (prd >= 100)
		{
			_putchar((prd / 100) + '0');
			_putchar((prd / 10) % 10 + '0');
		}
		else if (prd <= 99 && prd >= 10)
		{
			_putchar((prd / 10) + '0');
		}
			_putchar((prd % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
