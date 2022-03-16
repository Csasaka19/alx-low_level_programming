#include "main.h"
/**
*main - check code
*Description: returns 1 if @c char is lower case otherwise 0
*Return: 0
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
