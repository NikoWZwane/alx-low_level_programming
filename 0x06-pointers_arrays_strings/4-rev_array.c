#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int tmpo, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmpo = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmpo;
	}
}
