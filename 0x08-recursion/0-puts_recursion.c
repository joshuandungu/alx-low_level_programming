#include "main.h"
<<<<<<< HEAD
=======
#include <stdio.h>

>>>>>>> be3fb9daa0efc0e5005c2843b3ad4ed237115d47
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
<<<<<<< HEAD
		iputs_recursion(s + 1);
=======
		_puts_recursion(s + 1);
>>>>>>> be3fb9daa0efc0e5005c2843b3ad4ed237115d47
	}

	else
		putchar('\n');
}

