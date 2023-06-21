#include<stdio.h>
/**
 * main - Write a C program that prints the size of various typeis
 *
 * Return: Always 0 (success)
 **/
int main(void)
{
	char charType;
	int intType;
	long int longInt;
	long long int longlongInt;
	float floatType;

	printf("Size of a char:%zu byte(s)\n", sizeof(charType));
	printf("Size of an int:%zu byte(s)\n", sizeof(intType));
	printf("Size of a long int:%zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int:%zu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float:%zu byte(s)\n", sizeof(floatType));
	return (0);
}
