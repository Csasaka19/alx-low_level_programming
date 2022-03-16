#include "main.h"
/**
*main - check code
*Description: prints letters of the alphabet
*Return: 0
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
