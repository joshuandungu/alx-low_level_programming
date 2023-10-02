#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
/*
 * File: main.h
 * Author: joshua ndungu
 * Desc: Header file containing the prototypes of all functions
 *       included in the static library libholberton.a.
 */

int _isupper(int c);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _isdigit(int c);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strncat(char *dest, char *src, int n);
char *_strchr(char *s, char c);
size_t _strlen(const char *str);
char *_strncpy(char *dest, char *src, int n);
int _islower(int c);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
int _isalpha(int c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _abs(int n);
char *_strcpy(char *dest, const char *src);
int _atoi(char *s);

#endif
