#include "main.h"
/**
*print_rev - prints string in reverse followed by new line
*@s: string argument to reverse
*/
void print_rev(char *s)
{
int len;
int kel;
len = 0;
if (*s != '\0')
{
len++;
++s;
}
s--;
for (kel = len; kel > 0; kel--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

