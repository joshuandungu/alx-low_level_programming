/* file : 0-isupper.c
 * author : joshua ndungu
 */
#include "main.h"
/** 
 * 0-isupper.c : Checks the letters in uppercase
 * @c : character to be checked
 * Return 1: If letter is in uppercase , 0 otherwise
 */
int _isupper(int c )
{
	if (c >= 'A' && c<= 'Z')
	    return(1);
	else 
		return(0);
}
