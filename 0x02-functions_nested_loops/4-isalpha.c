#include "main.h"
/**
*_isalpha - checks for alphabetic character
*@c: character to be checked
*Description: checks for alphabets
*Return: 0 if it is an integer, 1 if an alphabet character
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
