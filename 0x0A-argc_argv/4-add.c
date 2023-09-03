#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check-sum - check string for a digit
 * @str: string
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++
	}
	return (1);
}
/**
 * main - program that adds positive numbers
 * @argc: argument
 * @argv: argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int count;
int strtoint;
int sum = 0;

count = 1;
while (count < argc)
{
	if (check_num(argv[count]))
	{
		strtoint = atoi(argv[count]);
		sum += strtoint;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
}
printf("%d\n", sum);
return (0);
}
