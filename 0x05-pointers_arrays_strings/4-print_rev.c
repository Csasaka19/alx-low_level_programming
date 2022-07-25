#include "main.h"
/**
*print_rev - prints string in reverse followed by new line
*@s: string argument to reverse
*/
void print_rev(char *s)
{
int k = 0;

while (s[k] && *s != '\0')
{
k++;
}

while (k-- && *s != '\0')
{
_putchar(s[k]);
}
_putchar('\n');
}

