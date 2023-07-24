#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the first 50 numbers, with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long l = 1, m = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", l);
	else if (i == 1)
	printf(", %ld", m);
	else
	{
		m += l;
		l = m - l;
		printf(", %ld", m);
	}
	++i;
	}
	printf("\n");
	return (0);
}

