#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index
 * @index: is the index, starting from 0
 * @n: number of bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}
