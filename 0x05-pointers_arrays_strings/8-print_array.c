#include "main.h"
#include <stdio.h>

/**
 * print_array - elements of an array of integers
 * @n: is the number of elements of the array
 * @a: array of integers
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
