#include <stdio.h>
#include <stdlib.h>

/**
*print_to_98 - print to 98
*Description: prints all natural numbers from n to 98 followed by a new line
*Return: 0 or 1
*/
void print_to_98(int n)
{
while (n <= 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98");
putchar('\n');
}
