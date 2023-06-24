#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;
	char upAlphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for (upAlphabet = 'A'; upAlphabet <= 'Z' ; upAlphabet++)
	{
		putchar(upAlphabet);
	}
	putchar('\n');
	return (0);
}
