#include "main.h"
/**
* positive_or _nagative - check integer is positive or negative
*
* @i: is zero
* Return:0
*/
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is positive\n", i);
	else if (i > 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
