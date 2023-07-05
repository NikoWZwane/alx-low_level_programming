#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main (void)
{
	long int n;
	long int max;
	long int i;

	while (n % 2 == 0)
	{
		max = 2;
		n /=2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
		if (n > 2)

