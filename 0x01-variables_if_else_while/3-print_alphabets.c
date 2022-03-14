#include <stdio.h>
/**
*Description: prints alphabet in lowercase then in uppercase then new line
*Return:0
*/
int main(void)
{
char c = 'a';
while (c <= 'z');
{
putchar(c);
c++;
}
c= 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return 0;
}
