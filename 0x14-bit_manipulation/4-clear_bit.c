#include "main.h"
/**
 * clear_bit - Sets the value of a given bit to 0 at index
 * @n: Pointer to the number you want to set
 * @index: the bit you want to set
 * Return: 1 if it worked, or -1 if an error
 **/

int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

		return (1);

}
