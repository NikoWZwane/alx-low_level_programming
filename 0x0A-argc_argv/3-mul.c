#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv:
 *
 * Return: On success 1.argumet
 * 
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);


}
