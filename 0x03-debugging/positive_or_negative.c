#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative- Prints a random number
 * @i : print a number
 *
 * Return: Always 0.
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
