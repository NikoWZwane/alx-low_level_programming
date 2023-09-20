#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: strings
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (comparator(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - string is a palindrome
 * @s: string lenght
 *
 * Return: string lenght
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
 * Return: 1 if palindrome, 0 if not
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) != *(s + n2 - 1))
		return (0);
	if (n1 >= n2)
		return (1);
	return (comparator(s, n1 + 1, n2 - 1));
}

