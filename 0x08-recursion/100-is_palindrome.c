#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - string is a palindrome
 * @s: string
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compare string
 * @s: string to be cpmpared
 * @n1: num1
 * @n2: num2
 *
 * Return: Always 0.
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
