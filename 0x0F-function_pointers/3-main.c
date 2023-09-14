#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main -  function only
 * @argc: arguments
 * @argv: argument arrays
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])

{
	int num1, num2;
	char *op;
	int (*operation)(int, int); /* Declare the operation function pointer */

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* Check if 'op' is a valid operator and get the corresponding function */
	operation = get_op_func(op);

	if (operation == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(num1, num2));

	return (0);
}
