#include "main.h"
/**
*_puts - prints string followed by new line to stdout
*@str: string argument to print
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}