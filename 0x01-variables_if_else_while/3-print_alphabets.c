#include <stdio.h>
/**
 *main - main block
 *Description: prints alphabet in lowercase then in uppercase then new line
 *Return:0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c += 1;
}
c = 'A';

while (c <= 'Z')
{
putchar(c);
c += 1;
}
putchar('\n');
return (0);
}
