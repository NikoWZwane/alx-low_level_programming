#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - Recursively checks if num is prime.
 * @n: The number for which the square root is calculated.
 *
 * Return: The natural square root of n, or -1
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Calculates the natural square root of a number.
 * @n: The number to check for primality.
 * @i: The current iteration (divisor) being checked.
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
