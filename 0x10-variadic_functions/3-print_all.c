#include "variadic_functions.h"
/**
 * print_char - print a char
 * @arg: a list of argument pointing add charcter to be printed
 *
 * Return: nothing
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 * @arg: a list of argument pointing
 *
 * Return: nothing
*/
void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}
/**
 * print_float - print a float
 * @arg: a list of argument pointing
 *
 * Return: nothing
*/

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}
/**
 * print_string - print a string
 * @arg: a list of argument pointing
 *
 * Return: nothing
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - a function that prints anything
 * @format: A string of character representing
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, k = 0;
	char *separator = "";

	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		k = 0;

		while (k < 4 && (format[i] != *(funcs[k].symbol)))
			k++;
		if (k < 4)
		{
			printf("%s", separator);
			funcs[k].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
