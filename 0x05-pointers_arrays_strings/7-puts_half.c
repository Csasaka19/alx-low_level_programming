#include "main.h"
/**
*puts_half - prints second half of string
*@str: string to print
*/
void puts_half(char *str)
{
int f;

for (f = 0; *str != '\0'; f++)
;

f++;
for (f /= 2; *str != '\0'; f++)
{
_putchar(str[f]);
}
_putchar('\n');
}
