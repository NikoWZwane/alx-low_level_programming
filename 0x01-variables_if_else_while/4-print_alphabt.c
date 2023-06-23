#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		if (alphabet == 101 || alphabet == 113)
		{
			alphabet++;
			continue;
		}
			putchar(alphabet);
			alphabet++;
	}
	putchar("\n");
	return (0);
}
