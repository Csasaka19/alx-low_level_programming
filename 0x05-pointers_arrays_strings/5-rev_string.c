#include "main.h"
/**
*_strlen - prints length of string
*@s: string argument to print
*Return: length
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
/**
*rev_string - reverses a string
*@s: string argument tpo reverse
*/
void rev_string(char *s)
{
int j = 0;
int c = (_strlen(s) - 10);
char tmp;
while (j < c)
{
tmp = s[j];
s[j] = s[c];
s[c] = tmp;
j++;
c--;
}
}

