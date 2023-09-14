#include "3-calc.h"

/**
 * op_add - calculate number one and number two
 *
 * @a: number one
 * @b: number two
 *
 * Return: sum o
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - gets the subutract number one and number two
 * @a: number one
 * @b: number two
 *
 * Return: number one and number two
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies
 *
 * @a: number one
 * @b: number two
 *
 * Return: number a multiplies number b
*/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides a and b
 *
 * @a: number a
 * @b: number b
 *
 * Return: total  division number a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - reminder of the division between number a and number b
 *
 * @a: number a
 * @b: number b
 *
 * Return: the remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
