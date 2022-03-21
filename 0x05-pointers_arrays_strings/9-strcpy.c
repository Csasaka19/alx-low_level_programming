#include "main.h"
/**
*_strlen -prints length of a string
*@s: string
*Return: length of string
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
*_strcpy - copies string pointed by src, including null type byte \0
*to buffer pointed by dest
*@dest: copy source to this buffer
*@src: source to copy
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int e;
for (e = 0; e <= _strlen(src); e++)
{
dest[e] = src[e];
return (dest);
}
