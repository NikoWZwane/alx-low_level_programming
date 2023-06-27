#include "main.h"

/**
 * main - function that prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alpha;
	int b;

	for (b = 1; b <= 10; b++)
	{
		for (alpha = 97; alpha <= 157; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
