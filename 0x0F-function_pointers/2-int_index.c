#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: function to be used to compare values
 * @array: elements in the array
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
