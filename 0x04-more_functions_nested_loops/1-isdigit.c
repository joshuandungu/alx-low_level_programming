/* file : 1-isdigit.c
 * auth : joshua ndungu
 */

#include "main.h"

/**
 * 1-isdigit - checks is a character is a digit 
 * @c: retruns the character
 *
 * Return 1: if character is a digit otherwise retrun 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c<= '9')
		return(1);
	else 
		return (0);
}
