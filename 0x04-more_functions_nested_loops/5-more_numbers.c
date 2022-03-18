#include "main.h"
/**
*void more_numbers(void): prints numbers 0 to 14 ten times
*/
void more_numbers(void)
{
char num;
int k;

for (k = 1; k <= 10; k++)
{
for (num = 0; num <= 14; num++)
{
if (num / 10 > 0)

_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
