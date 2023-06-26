#include <stdio.h>
/**
 * main - Smile in the mirror
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 122;

	while (num >= 97)
	{
	putchar(num);
	num--;
	}
	putchar('\n');
	return (0);
}
