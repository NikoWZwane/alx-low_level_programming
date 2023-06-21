#include <stdio.h>
/**
 * main - Write a C program that prints the size of various typeis
 * Return:0 Always (success)
 *
*/
int main(void)
{
char charType;
int intType;
long longType;
long int longInt;
float floatType;
long long int longlongInt;
printf("Size of a char:%zu byte(s)\n", sizeof(charType));
printf("Size of an int:%zu byte(s)\n", sizeof(intType));
printf("size of a long:%zu byte(s)\n", sizeof(longType));
printf("Size of long int:%zu byte(s)\n", sizeof(longInt));
printf("Size of long long int:%zu byte(s)\n", sizeof(longLongInt));
Printf("Size of a float:%zu byte(s)\n", sizeof(floatType));
}
return (0);
