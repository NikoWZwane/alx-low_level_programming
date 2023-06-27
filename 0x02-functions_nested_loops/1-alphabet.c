#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
