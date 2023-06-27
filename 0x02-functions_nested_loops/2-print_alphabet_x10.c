#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int b = 0;

	while (b <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		b++;
	}
}
