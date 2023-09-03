#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv:
 *
 * Return: On success 1.
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
