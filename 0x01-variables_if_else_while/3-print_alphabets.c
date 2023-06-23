#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	char UpperAlphabet = 'A';

	do (alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	do  (UpperAlphabet <= 'Z' ; UpperAlphabet++)
	{
		putchar(UpperAlphabet);
	}
	putchar('\n');
	return (0);
}
