#include "main.h"
/**
*print_alphabet_x10 - prints lowercase ten times
*Description: prints the alphabet ten times in 
*lower case
*Return: 0
*/
void print_alphabet_x10(void)
{
char j;
int i;
i = 1;
j = 'a';
for (i = 1; i <= 10 ; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
