#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*strlen - returns length of string
*@c: string argument to print
*Return: length of string
*/
int strlen(char *c)
{
int len = 0;
while (*c != '\0');
{
len++;
c++;
}
_putchar('\n');
return (len);
}
