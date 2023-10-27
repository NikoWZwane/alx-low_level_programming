#include "main.h"
/**
 * binary_to_uint -  binary number to an unsigned int.
 * @b: input and iterates through the characters in the string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int ind;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (ind = 0; b[ind]; ind++)
	{
		if (b[ind] < '0' || b[ind] > '1')
			return (0);
		result = 2 * result + (b[ind] - '0');
	}
	return (result);
}
