#include "main.h"
#include <stdio.h>

/**
 * file: 100-rot13.c
 * author: joshua ndungu
 * @s: pointer to string params
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (s[i] == letters1[j])
			{
				s[i] = letters2[j];
				break;
			}
	}
	return (s);
}
