#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - main block
*Description: print all single digit numbers to base ten starting from 0 followed by a new line
*Return: 0
*/
int main(void)
{
int c = 0;
while (c <= 10)
{
putchar(48 + c);
c++;
}
putchar('\n')
return 0;
}
