#include "main.h"
/**
*_strlen - prints length of string
*@s: string to be printed
*Return: length of string
*/
int _strlen(char *s)
{
int len;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
/**
*put2 - prints second half of string
*@str: string to print
*/
void puts2(char *str)
{
int k;
for (k = 0; str[k] != 0 && k < _strlen(str); k += 2)
{
_putchar(str[k]);
}
_putchar('\n');
}
