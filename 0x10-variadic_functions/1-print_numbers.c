#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: variable passed to function.
 * @...: variable number to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int indx;

	var_start(nums, n);

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(numb, int));
		if (indx != (n - 1) && separator != NULL)
			print("%s", separator);
	}
	printf("\n");
	va_end(numb);
}
