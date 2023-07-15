#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into
 * @s: string to be encoded
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	int str_lenght, leetCount;
	char leetletters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	str_lenght = 0;
	while (s[str_lenght] != '\0')
	{
		leetCount = 0;
		while (s[str_lenght < 10])
		{
			if (leetletters[leetCount] == s[str_lenght])
			{
			s[str_lenght] = leetNums[leetCount];
			}
			leetCount++;
		}
		str_lenght++;
	}
	return (s);
}

