#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int num;
	int alph;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alph = 97; alph <= 102; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
