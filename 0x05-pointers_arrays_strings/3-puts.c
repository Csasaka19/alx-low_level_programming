#include "main.h"
/**
*_puts - prints string followed by new line to stdout
*@str: string argument to print
*/
void _puts(char *str)
{
int v = 0;
while (str[v] && *str != '\0')
{
_putchar(str[v]);
v += 1;
}
_putchar('\n');
}
