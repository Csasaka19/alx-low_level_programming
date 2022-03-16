#include "main.h"
/**
*main - check the code
*Description: prints the alphabet ten times in lower case then new line
*Return: 0
*/
void print_alphabet_x10(void)
{
char j;
int i;
i = 1;
j = 'a';
while (i <= 10)
{
while (j <= 'z')
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
return (0);
}

