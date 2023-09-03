#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - writes the arguments
 * @argc: The character
 * @argv: array
 *
 * Return: On success 1.
 * 
 */
int main(int argc, char *argv[])
{
        (void) argv;
	printf("%d\n", argc - 1);
        return (0);
}
