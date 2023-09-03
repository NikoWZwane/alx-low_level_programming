#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: The character to print
 * @argv: array of argument
 *
 * Return: On success 1.
 * 
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return 0
}
