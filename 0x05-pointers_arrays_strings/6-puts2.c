#include "main.h"
/**
*puts2 - prints even indicies of string
*@str: string to print
*/
void puts2(char *str)
{
int k = 0;
while (str[k] && *str != '\0')
{
if (str[k] % 2 == 0)
{
_putchar(str[k]);
}
k++;
}
_putchar('\n');
}
