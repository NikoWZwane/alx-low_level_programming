#include <stdio.h>
#include "main.h"
/**
 * main - writes the arguments
 * @argc: The character
 * @argv: array
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
