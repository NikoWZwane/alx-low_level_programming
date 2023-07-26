#include <stdio.h>
#include "main.h"
/**
 * main -  prints the number of arguments passed into it
 * @argc: is the integer type of argument
 * @argv: is an array of character pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
