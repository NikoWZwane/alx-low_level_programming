#include "variadic_functions.h"
#include <stdio.h>
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

	va_start(numb, n);

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(numb, int));
		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numb);
}
