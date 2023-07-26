#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name
 * @argc: is a integer type of arguments
 * @argv: is an array
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
