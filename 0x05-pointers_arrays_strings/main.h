#ifdef MAIN.H
#define MAIN.h

#include <stdio.h>

/**
*_putchar - puts character to standard output
*@c: character to put to standard output
*/

int _putchar(char c);

/**
*reset_to_98 - takes a pointer to an intas a parameter
*and updates value it points to 98
*@n: pointer to int n
*/

void reset_to_98(int *n);

/**
*swap_int - swaps value of two integers
*@a: integer swap
*@b: integer swap
*/

void swap_int(int *a, int *b);

/**
*_strlen - returns length of a string
*@s: string argument
*Return: length of string
*/

int _strlen(char *s);

/**
*_puts - prints string followed by new line to stdout
*@str: string argument to print 
*/

void _puts(char *str);

/**
*print_rev - prints string in reverse followed by a newline
*@s: string argument to reverse
*/

void ptint_rev(char *s);

/**
*rev_string - reverses a string
*@s: string argument to reverse
*/

void rev_string(char *s);

/**
*puts2 - prints characters starting with the first character followed by a new line
*@str: string to print 
*/

void puts2(char *str);

/**
*puts_half - prints second half of the string
*@str: string argument to print
*/

void puts_half(char *str);

/**
*print_array - prints n elements of an array of integers followed by a new line
*@a: array
@n: number of elements 
*/

void print_array(int *a, int n);

/**
*_strcpy - copies string pointed by sr, including the null type byte \0
*to buffer pointed by by dest
*@dest: copy source to this buffer
*@src: source to copy
*Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src);

/**
*_atoi - convert string to int
*@s: string to convert
*Return: integer
*/

int _atoi(char *s);

#endif 
