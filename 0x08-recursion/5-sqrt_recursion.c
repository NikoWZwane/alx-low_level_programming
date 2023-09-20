#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which the square root is calculated.
 *
 * Return: The natural square root of n, or -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - natural square root of a number using recursion.
 * @n: The number for which the square root is calculated.
 * @i: The current integer being checked as a potential square root.
 *
 * Return: The natural square root of n if found, or -1 if not found.
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);
	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
}

