/*
 * file : 2-print_alphabet_x10.c
 * author : joshua ndungu
 */
#include "main.h"
/** 
 * main -reads the code
 *  prints 10 times the alphabet, in lowercase, followed by a new line.
 * return always 0
 */
int main(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for ( letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
