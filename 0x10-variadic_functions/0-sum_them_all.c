#include "variadic.h"
#include <stdarg.h>
/**
 * sum_them_all - the sum of all its parameters.
 * @n: parameter passed to the function
 * @...: variable yo calc sum
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum - 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
