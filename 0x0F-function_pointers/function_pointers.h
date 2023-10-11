#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


#include <stddef.h>
#include <stdlib.h>
/**
 * function_pointers.h - contain all function prototypes
 * void print_name(chat *name, void (*f) char *))  function that prints a name
 * int _putchar(char c - executes a function given array as an elemt parameter
 * void array_iterator(int *array, size_t size, void (*action)(int))
 * int int_index(int *array, int size, int (*cmp)(int)) -do simple operation
 */
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


	#endif

