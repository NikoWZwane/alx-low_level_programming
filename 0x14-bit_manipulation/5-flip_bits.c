#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip
 * @n: one number
 * @m  another number
 *
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ind, count = 0;
	unsigned long int current;
	unsigned long int exclude = n ^ m;

	for (ind = 63; ind >= 0; ind--)
	{
		current = exclude >> ind;
		if (current & 1)
			count++;
	}
	return (count);
}
