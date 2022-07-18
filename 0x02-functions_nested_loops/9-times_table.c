#include "main.h"
/**
*times_table - prints the nine times table starting with 0
*/
void times_table(void)
{
int k, f;
int result;
k = 0;
f = 0;
while (k <= 9)
{
while (f <= 9)
{
result = k *f;
_putchar(result + ',' + ' ');
f++;
}
_putchar('\n');
k++;
}
}
