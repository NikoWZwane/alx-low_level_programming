#include <stdio.h>
#include "main.h"

/**
 * main - print
 * @argc: is the integer type of argument
 * @argv: is an array of character pointers
 * Return: Always 0 (Success)
 */
void main(int argc, char *argv[])   
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s", argv[i]);       
	}
	printf("\n");
	return (0);
}