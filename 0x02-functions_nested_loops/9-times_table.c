#include "main.h"
/**
*void times_table: prints the nine times table starting with 0
*/
void times_table(void)
{
int row;
int column;
int product;
for (row = 0; row <= 9; row++)
{
product = (row * column);
if (column == 0)
{
_putchar('0' + product);
}
else if (product <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product > 9)
{
_putchar(',');
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
}
_putchar('\n');
}
