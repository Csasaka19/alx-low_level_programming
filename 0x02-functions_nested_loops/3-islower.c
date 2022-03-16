#include "main.h"
/**
*int _islower:checks lowercase letter
*@c: character to be checked
*Return: 0 if lowercase, 1 if uppercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
